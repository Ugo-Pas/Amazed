/*
** EPITECH PROJECT, 2026
** print way
** File description:
** my_print_way_robot
*/

#include "../include/amazed.h"

static int len_path(bfs_t *bfs, int start, int end, int len)
{
    if (end == -1)
        return len;
    len++;
    return len_path(bfs, start, bfs->parent[end], len);
}

static int set_path_in_way(bfs_t *bfs, int start, int end, int index)
{
    if (end == -1)
        return -1;
    bfs->way[index] = end;
    index--;
    return set_path_in_way(bfs, start, bfs->parent[end], index);
}

void my_print_way_robot(amazed_t *amazed, bfs_t *bfs)
{
    int len = len_path(bfs, amazed->start->id, amazed->end->id, 0);

    if (len <= 0)
        return;
    if (bfs->way != NULL)
        my_free(bfs->way);
    bfs->way = malloc(sizeof(int) * (len + 1));
    if (bfs->way == NULL)
        return;
    set_path_in_way(bfs, amazed->start->id, amazed->end->id, len - 1);
    bfs->way[len] = -1;
}
