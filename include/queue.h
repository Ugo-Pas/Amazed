/*
** EPITECH PROJECT, 2026
** QUEUE_H
** File description:
** QUEUE_H
*/

#ifndef QUEUE_H
    #define QUEUE_H
    #define MAX_TAB_LEN 1000

typedef struct bfs {
    int **adj;
    int *visited;
    int *parent;
    int *queue;
    int front;
    int now;
    int current;
    int index;
    int *way;
} bfs_t;

void my_free_bfs(bfs_t *info, int len);
bfs_t *create_bfs(int n);
void my_bsf(bfs_t *bfs, int start, int n);
void print_path(bfs_t *bfs, int start, int end);

#endif /* !QUEUE_H */
