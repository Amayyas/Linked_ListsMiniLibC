/*
** EPITECH PROJECT, 2025
** linked_lists
** File description:
** delete_back
*/

#include "../../include/linked_lists.h"

void delete_back(node_t **head)
{
    node_t *tmp = *head;
    node_t *prev = NULL;

    if (*head == NULL) {
        return;
    }
    if (tmp->next == NULL) {
        free(tmp);
        *head = NULL;
        return;
    }
    while (tmp->next != NULL) {
        prev = tmp;
        tmp = tmp->next;
    }
    prev->next = NULL;
    free(tmp);
}
