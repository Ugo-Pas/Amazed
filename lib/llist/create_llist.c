/*
** EPITECH PROJECT, 2025
** create llist
** File description:
** create llist
*/

#include "llist.h"
#include "../../include/utility.h"

void push_to_front(llist_t **begin, void *data)
{
    llist_t *new = malloc(sizeof(llist_t));

    if (new == NULL)
        return;
    new->data = data;
    new->next = *begin;
    *begin = new;
}
