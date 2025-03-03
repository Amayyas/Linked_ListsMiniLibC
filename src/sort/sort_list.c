/*
** EPITECH PROJECT, 2025
** linked_lists
** File description:
** sort_list
*/

#include "../../include/linked_lists.h"

node_t *merge(node_t *left, node_t *right)
{
    if (!left) {
        return right;
    }
    if (!right) {
        return left;
    }
    if (left == NULL || right == NULL) {
        return NULL;
    }
    if (left->data < right->data) {
        left->next = merge(left->next, right);
        return left;
    } else {
        right->next = merge(left, right->next);
        return right;
    }
}

node_t *merge_sort(node_t *head)
{
    node_t *slow = head;
    node_t *fast = head;
    node_t *prev = NULL;
    node_t *left = NULL;
    node_t *right = NULL;

    if (!head || !head->next) {
        return head;
    }
    while (fast && fast->next) {
        prev = slow;
        slow = slow->next;
        fast = fast->next->next;
    }
    prev->next = NULL;
    left = merge_sort(head);
    right = merge_sort(slow);
    return merge(left, right);
}

void sort_list(node_t **head)
{
    *head = merge_sort(*head);
}
