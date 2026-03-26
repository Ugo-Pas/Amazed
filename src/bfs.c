/*
** EPITECH PROJECT, 2026
** bfs
** File description:
** bfs
*/

#include "../include/amazed.h"
#include "../include/queue.h"

static int **malloc_adj(int len)
{
    int **tab;

    tab = my_malloc(sizeof(int *) * len);
    if (tab == NULL)
        return NULL;
    for (int i = 0; i < len; i++) {
        tab[i] = my_malloc(sizeof(int) * len);
        if (tab[i] == NULL)
            return NULL;
        for (int y = 0; y < len; y++)
            tab[i][y] = 0;
    }
    return tab;
}

static void init_tab(bfs_t *new, int n)
{
    new->queue = my_malloc(sizeof(int) * n);
    new->visited = my_malloc(sizeof(int) * n);
    new->parent = my_malloc(sizeof(int) * n);
}

bfs_t *create_bfs(int n)
{
    bfs_t *new = my_malloc(sizeof(bfs_t));

    if (!new)
        return NULL;
    new->adj = malloc_adj(n);
    new->front = 0;
    new->current = 0;
    new->now = 0;
    new->index = 0;
    new->way = NULL;
    init_tab(new, n);
    for (new->index = 0; new->index < n; (new->index)++) {
        new->visited[new->index] = 0;
        new->parent[new->index] = -1;
    }
    return new;
}

static void update_bfs(bfs_t *bfs, int n)
{
    for (bfs->index = 0; bfs->index < n; (bfs->index)++) {
        if (bfs->adj[bfs->current][bfs->index] == 1
            && bfs->visited[bfs->index] == 0) {
            bfs->visited[bfs->index] = 1;
            bfs->parent[bfs->index] = bfs->current;
            bfs->queue[bfs->now] = bfs->index;
            (bfs->now)++;
        }
    }
}

void my_bsf(bfs_t *bfs, int start, int n)
{
    if (!bfs)
        return;
    bfs->visited[start] = 1;
    bfs->queue[bfs->now] = start;
    (bfs->now)++;
    while (bfs->front < bfs->now) {
        bfs->current = bfs->queue[bfs->front];
        (bfs->front)++;
        update_bfs(bfs, n);
    }
    return;
}
