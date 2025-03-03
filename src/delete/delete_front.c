/*
** EPITECH PROJECT, 2025
** linked_lists
** File description:
** delete_front
*/

#include "../../include/linked_lists.h"

void delete_front(node_t **head)
{
    node_t *tmp = *head;

    if (*head == NULL) {
        return;
    }
    *head = tmp->next;
    free(tmp);
}
