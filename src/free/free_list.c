/*
** EPITECH PROJECT, 2025
** linked_lists
** File description:
** free_list
*/

#include "../../include/linked_lists.h"

void free_list(node_t *head)
{
    node_t *tmp = head;
    node_t *next = NULL;

    while (tmp != NULL) {
        next = tmp->next;
        free(tmp);
        tmp = next;
    }
}
