/*
** EPITECH PROJECT, 2025
** linked_lists
** File description:
** find_node_by_data
*/

#include "../../include/linked_lists.h"

node_t *find_node_by_data(node_t *head, int data)
{
    node_t *tmp = head;

    while (tmp != NULL) {
        if (tmp->data == data) {
            return tmp;
        }
        tmp = tmp->next;
    }
    return NULL;
}
