/*
** EPITECH PROJECT, 2025
** linked_lists
** File description:
** find_node_by_index
*/

#include "../../include/linked_lists.h"

node_t find_node_by_index(node_t *head, int index)
{
    node_t *tmp = head;

    for (int i = 0; tmp != NULL && i < index; i++) {
        tmp = tmp->next;
    }
    return *tmp;
}
