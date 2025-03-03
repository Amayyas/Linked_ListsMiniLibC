/*
** EPITECH PROJECT, 2025
** linked_lists
** File description:
** linked_lists
*/

#ifndef INCLUDED_LINKED_LISTS_H
    #define INCLUDED_LINKED_LISTS_H

    #include <stdlib.h>
    #include <stdio.h>
    #include <stddef.h>

typedef struct node {
    int data;
    struct node *next;
} node_t;

void add_node_end(node_t *head, int data);
void add_node_start(node_t **head, int data);

node_t *create_node(int data);

void delete_at(node_t **head, int index);
void delete_back(node_t **head);
void delete_front(node_t **head);
void delete_node_by_data(node_t **head, int data);
void delete_node_by_index(node_t *head, int index);

node_t *find_node_by_data(node_t *head, int data);
node_t find_node_by_index(node_t *head, int index);

void free_list(node_t *head);

int list_length(node_t *head);

void push_back(node_t **head, int data);
void push_front(node_t **head, int data);

void show_list(node_t *head);

void sort_list(node_t **head);

int main(void);

#endif /* !INCLUDED_LINKED_LISTS_H */
