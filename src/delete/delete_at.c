/*
** EPITECH PROJECT, 2025
** linked_lists
** File description:
** delete_at
*/

#include "../../include/linked_lists.h"

void delete_at(node_t **head, int index)
{
    node_t *tmp = *head;
    node_t *prev = NULL;

    if (!tmp) {
        return;
    }
    if (index == 0) {
        *head = tmp->next;
        free(tmp);
        return;
    }
    for (int i = 0; tmp != NULL && i < index; i++) {
        prev = tmp;
        tmp = tmp->next;
    }
    if (!tmp) {
        return;
    }
    prev->next = tmp->next;
    free(tmp);
}
