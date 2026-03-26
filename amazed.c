/*
** EPITECH PROJECT, 2026
** test
** File description:
** test
*/

#include "include/amazed.h"
#include "include/queue.h"
#include <stdio.h>

static int amazed(amazed_t *info)
{
    int ret = 0;
    int len_node;
    bfs_t *bfs = NULL;

    len_node = info->len_node;
    bfs = create_bfs(len_node);
    create_matrice(bfs, info->tunnel, info);
    my_bsf(bfs, info->start->id, len_node);
    my_print_way_robot(info, bfs);
    ret = is_real_way(bfs, info);
    my_free_bfs(bfs, len_node);
    my_free_struct_amazed(info);
    return ret;
}

int main(void)
{
    char *buff = get_content();
    amazed_t *info = my_get_info_labyrinth(buff);
    int ret = 0;

    if (info != NULL) {
        ret = amazed(info);
    } else {
        my_free(buff);
        return 1;
    }
    my_free(buff);
    return ret;
}
