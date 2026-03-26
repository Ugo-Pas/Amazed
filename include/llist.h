/*
** EPITECH PROJECT, 2025
** llist
** File description:
** llist
*/

#ifndef LLIST_H
    #define LLIST_H
    #include <stdlib.h>

typedef struct llist_s {
    void *data;
    struct llist_s *next;
} llist_t;

llist_t *create_node(void *data, llist_t *next);
void push_to_front(llist_t **begin, void *data);
#endif /* !LLIST_H */
