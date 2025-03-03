/*
** EPITECH PROJECT, 2025
** linked_lists
** File description:
** delete_node_by_index
*/

#include "../../include/linked_lists.h"

void delete_node_by_index(node_t *head, int index)
{
    node_t *tmp = head;
    node_t *prev = NULL;
    int i = 0;

    if (index == 0) {
        head = tmp->next;
        free(tmp);
        return;
    }
    while (tmp != NULL && i < index) {
        prev = tmp;
        tmp = tmp->next;
        i++;
    }
    if (tmp == NULL) {
        return;
    }
    prev->next = tmp->next;
    free(tmp);
}
