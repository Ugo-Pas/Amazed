/*
** EPITECH PROJECT, 2026
** amazed
** File description:
** print_road
*/

#include "../include/amazed.h"
#include "../include/queue.h"

static int get_path_len(int *way)
{
    int len = 0;

    while (way[len] != -1)
        len++;
    return len;
}

static int is_occupied(int *positions, int nb_robot, int node, int end)
{
    if (node == end)
        return 0;
    for (int i = 0; i < nb_robot; i++) {
        if (positions[i] == node)
            return 1;
    }
    return 0;
}

static char *get_name_by_id(llist_t **loc_point, int id)
{
    loc_t *loc = NULL;

    for (llist_t *cur = *loc_point; cur != NULL; cur = cur->next) {
        loc = cur->data;
        if (loc->id == id)
            return loc->name;
    }
    return NULL;
}

static void next_deplacement(robot_t *robot, int r, int next_node, int next_idx)
{
    next_node = robot->chemin[next_idx];
    if (is_occupied(robot->positions, robot->nb_rb, next_node,
            robot->chemin[robot->path_len - 1]))
        return;
    robot->positions[r] = next_node;
    robot->moved = 1;
    if (robot->positions[r] == robot->chemin[robot->path_len - 1])
        robot->arrived++;
    my_printf("P%d-%s ", r + 1, get_name_by_id(robot->loc_point, next_node));
}

static void deplacement(robot_t *robot, int r)
{
    int cur = robot->positions[r];
    int next_idx;
    int next_node;

    if (robot->positions[r] == robot->chemin[robot->path_len - 1])
        return;
    if (cur == -1)
        next_idx = 1;
    else {
        next_idx = 0;
        while (next_idx < robot->path_len && robot->chemin[next_idx] != cur)
            next_idx++;
        next_idx++;
    }
    if (next_idx >= robot->path_len)
        return;
    next_deplacement(robot, r, next_node, next_idx);
}

static void init_rob(robot_t *robot, amazed_t *amazed, bfs_t *bfs)
{
    robot->nb_rb = amazed->nb_robot;
    robot->chemin = bfs->way;
    robot->path_len = get_path_len(robot->chemin);
    robot->positions = my_malloc(sizeof(int) * robot->nb_rb);
    robot->loc_point = amazed->loc_point;
    robot->arrived = 0;
    robot->moved = 1;
}

static void print_road(bfs_t *bfs, amazed_t *amazed)
{
    robot_t *robot = malloc(sizeof(robot_t));

    init_rob(robot, amazed, bfs);
    if (!robot->positions || robot->path_len <= 0)
        return;
    for (int i = 0; i < robot->nb_rb; i++)
        robot->positions[i] = -1;
    my_putstr("#moves\n");
    while (robot->arrived < robot->nb_rb && robot->moved) {
        robot->moved = 0;
        for (int r = 0; r < robot->nb_rb; r++) {
            deplacement(robot, r);
        }
        my_printf("\n");
    }
    my_free(robot->positions);
    my_free(robot);
    return;
}

static int len_way(int *way)
{
    int len = 0;

    while (way[len] != -1)
        len++;
    return len;
}

int is_real_way(bfs_t *bfs, amazed_t *amazed)
{
    int len = len_way(bfs->way);

    if (len <= 2) {
        my_put_err("Start node is linked to nothing. Sad :c.\n");
        return 1;
    }
    if (bfs->way[len - 1] != amazed->end->id) {
        my_put_err("There is no valid path from start to exit.\n");
        return 1;
    }
    print_road(bfs, amazed);
    return 0;
}
