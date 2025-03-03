/*
** EPITECH PROJECT, 2025
** linked_lists
** File description:
** push_front
*/

#include "../../include/linked_lists.h"

void push_front(node_t **head, int data)
{
    node_t *new_node = malloc(sizeof(node_t));

    if (new_node == NULL) {
        return;
    }
    new_node->data = data;
    new_node->next = *head;
    *head = new_node;
}
