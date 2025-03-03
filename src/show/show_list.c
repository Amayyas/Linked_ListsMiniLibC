/*
** EPITECH PROJECT, 2025
** linked_lists
** File description:
** show_list
*/

#include "../../include/linked_lists.h"

void show_list(node_t *head)
{
    node_t *tmp = head;

    while (tmp != NULL) {
        tmp = tmp->next;
    }
}
