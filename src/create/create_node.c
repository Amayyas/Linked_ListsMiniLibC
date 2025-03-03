/*
** EPITECH PROJECT, 2025
** linked_lists
** File description:
** create_node
*/

#include "../../include/linked_lists.h"

node_t *create_node(int data)
{
    node_t *new_node = malloc(sizeof(node_t));

    if (new_node == NULL) {
        return (NULL);
    }
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}
