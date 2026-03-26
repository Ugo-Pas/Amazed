/*
** EPITECH PROJECT, 2026
** amazed
** File description:
** create_matrice
*/

#include "../include/amazed.h"
#include "../include/queue.h"

static void push_data(tunnel_t *info, bfs_t *bfs, llist_t **loc_point)
{
    char *tunnel1 = info->lien_one;
    char *tunnel2 = info->lien_two;
    int point1 = -1;
    int point2 = -1;
    loc_t *loc_search = NULL;

    for (llist_t *current = *loc_point;
        current != NULL; current = current->next) {
        loc_search = current->data;
        if (my_strcmp(tunnel1, loc_search->name) == 0) {
            point1 = loc_search->id;
        }
        if (my_strcmp(tunnel2, loc_search->name) == 0) {
            point2 = loc_search->id;
        }
    }
    if (point1 != -1 && point2 != -1) {
        bfs->adj[point1][point2] = 1;
        bfs->adj[point2][point1] = 1;
    }
}

int create_matrice(bfs_t *bfs, llist_t **tunnel, amazed_t *amazed)
{
    tunnel_t *info = NULL;

    if (tunnel == NULL) {
        return 84;
    }
    for (llist_t *current = *tunnel; current != NULL; current = current->next){
        info = current->data;
        push_data(info, bfs, amazed->loc_point);
    }
    for (int i = 0; i != amazed->id_max; i++) {
        bfs->adj[i][i] = 0;
    }
    return 0;
}
