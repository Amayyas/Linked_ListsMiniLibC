/*
** EPITECH PROJECT, 2025
** linked_lists
** File description:
** add_node_end
*/

#include "../../include/linked_lists.h"

void add_node_end(node_t *head, int data)
{
    node_t *tmp = head;

    while (tmp->next != NULL) {
        tmp = tmp->next;
    }
}
