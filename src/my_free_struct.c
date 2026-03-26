/*
** EPITECH PROJECT, 2026
** my_free_struct
** File description:
** my_free_struct
*/

#include "../include/amazed.h"

static void my_free_tunnel(tunnel_t *l)
{
    my_free(l->lien_one);
    my_free(l->lien_two);
    my_free(l);
}

static void my_free_loc(loc_t *l)
{
    my_free(l->name);
    my_free(l);
}

static void my_free_list(llist_t **list)
{
    llist_t *current;
    llist_t *prev = NULL;

    if (list == NULL)
        return;
    current = *list;
    while (current != NULL) {
        if (current->data != NULL)
            my_free_loc((loc_t *)current->data);
        prev = current;
        current = current->next;
        my_free(prev);
    }
}

static void my_free_list_tunnel(llist_t **list)
{
    llist_t *current;
    llist_t *prev = NULL;

    if (list == NULL)
        return;
    current = *list;
    while (current != NULL) {
        if (current->data != NULL)
            my_free_tunnel((tunnel_t *)current->data);
        prev = current;
        current = current->next;
        my_free(prev);
    }
}

void my_free_struct_amazed(amazed_t *a)
{
    if (a == NULL)
        return;
    if (a->loc_point != NULL) {
        my_free_list(a->loc_point);
        my_free(a->loc_point);
    }
    if (a->tunnel != NULL) {
        my_free_list_tunnel(a->tunnel);
        my_free(a->tunnel);
    }
    my_free(a);
}

void my_free_bfs(bfs_t *info, int len)
{
    if (info->way != NULL)
        my_free(info->way);
    for (int i = 0; i < len; i++) {
        my_free(info->adj[i]);
    }
    my_free(info->adj);
    my_free(info->parent);
    my_free(info->queue);
    my_free(info->visited);
    my_free(info);
}

amazed_t *error_case_free_struct(amazed_t *info, char **tab)
{
    my_free_struct_amazed(info);
    if (tab != NULL)
        my_free_array(tab);
    return NULL;
}
