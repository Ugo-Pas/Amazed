/*
** EPITECH PROJECT, 2026
** TEST
** File description:
** TEST_H
*/

#ifndef TEST_H
    #define TEST_H

    #include "my.h"
    #include "llist.h"
    #include "my_printf.h"
    #include "utility.h"
    #include "word_array.h"
    #include <stdio.h>
    #include "queue.h"

typedef struct loc
{
    int x;
    int y;
    char *name;
    int before;
    int id;
}loc_t;

typedef struct tunnel
{
    char *lien_one;
    char *lien_two;
} tunnel_t;

typedef struct amazed
{
    loc_t *start;
    loc_t *end;
    int nb_robot;
    llist_t **loc_point;
    llist_t **tunnel;
    int len_node;
    int start_or_end;
    int id_max;
    int is_tunnels;
}amazed_t;

typedef struct robot_s {
    int nb_rb;
    int *chemin;
    int path_len;
    int *positions;
    int arrived;
    int moved;
    llist_t **loc_point;
} robot_t;


void print_struct_amazed(amazed_t *info);
void my_free_struct_amazed(amazed_t *a);
char *my_realloc(char *old, int old_size, int new_size);
int create_matrice(bfs_t *bfs, llist_t **tunnel, amazed_t *amazed);
char *get_content(void);
amazed_t *my_get_info_labyrinth(char *str);
int is_tunnel(char *str, amazed_t *info);
tunnel_t *set_tunnel(char *t_one, char *t_two);
loc_t *set_loc_point(char *name, char *x, char *y, amazed_t *ama);
void my_print_way_robot(amazed_t *amazed, bfs_t *bfs);
int set_point(char **tab, int i, amazed_t *info);
void print_start_end(amazed_t *info);
void set_malloc_ll(amazed_t *info);
tunnel_t *set_tunnel(char *t_one, char *t_two);
loc_t *set_loc_point(char *name, char *x, char *y, amazed_t *ama);
int set_point(char **tab, int i, amazed_t *info);
void print_loc(loc_t *f);
amazed_t *error_case_free_struct(amazed_t *info, char **tab);
int is_real_way(bfs_t *bfs, amazed_t *amazed);
void print_loc(loc_t *f);
void print_tunnel_title(amazed_t *info);
int print_struct(amazed_t *info, char *tab);

#endif /* !TEST_H */
