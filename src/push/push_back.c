/*
** EPITECH PROJECT, 2025
** linked_lists
** File description:
** push_back
*/

#include "../../include/linked_lists.h"

void push_back(node_t **head, int data)
{
    node_t *new_node = malloc(sizeof(node_t));
    node_t *tmp = *head;

    if (new_node == NULL) {
        return;
    }
    new_node->data = data;
    new_node->next = NULL;
    if (*head == NULL) {
        *head = new_node;
        return;
    }
    while (tmp->next != NULL) {
        tmp = tmp->next;
    }
    tmp->next = new_node;
}
