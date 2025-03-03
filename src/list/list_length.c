/*
** EPITECH PROJECT, 2025
** linked_lists
** File description:
** list_length
*/

#include "../../include/linked_lists.h"

int list_length(node_t *head)
{
    node_t *tmp = head;
    int i = 0;

    while (tmp != NULL) {
        tmp = tmp->next;
        i++;
    }
    return i;
}
