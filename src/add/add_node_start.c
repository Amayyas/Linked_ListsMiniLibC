/*
** EPITECH PROJECT, 2025
** linked_lists
** File description:
** add_node_start
*/

#include "../../include/linked_lists.h"

void add_node_start(node_t **head, int data)
{
    node_t *new_node = malloc(sizeof(node_t));
    node_t *tmp = *head;

    if (new_node == NULL) {
        return;
    }
    *head = new_node;
    new_node->data = data;
    new_node->next = tmp;
}
