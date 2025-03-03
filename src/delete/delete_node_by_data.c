/*
** EPITECH PROJECT, 2025
** linked_lists
** File description:
** delete_node_by_data
*/

#include "../../include/linked_lists.h"

void delete_node_by_data(node_t **head, int data_of_node)
{
    node_t *prev = NULL;
    node_t *tmp = *head;
    int i = 0;

    while (tmp->data != data_of_node) {
        tmp = tmp->next;
        i++;
    }
    if (tmp->data == data_of_node) {
        tmp->next;
    }
    prev = tmp;
    tmp = tmp->next;
}
