/*
** EPITECH PROJECT, 2026
** parsing
** File description:
** parsing
*/

#include "../include/amazed.h"

static int is_number(char *str)
{
    if (str == NULL || str[0] == '\0')
        return 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if ((str[i] < '0' || str[i] > '9') && str[i] != '-')
            return 0;
    }
    return 1;
}

static int is_start_or_end(char **tab, int i, amazed_t *info)
{
    if (my_strcmp("##start", tab[i]) == 0) {
        my_putstr("##start\n");
        info->start = set_loc_point(tab[i + 1], tab[i + 2], tab[i + 3], info);
        info->start->id = info->id_max;
        info->id_max++;
        info->start_or_end = 1;
        push_to_front(info->loc_point, info->start);
        return 1;
    }
    if (my_strcmp("##end", tab[i]) == 0) {
        info->start_or_end = 2;
        my_putstr("##end\n");
        info->end = set_loc_point(tab[i + 1], tab[i + 2], tab[i + 3], info);
        info->end->id = info->id_max;
        info->id_max++;
        push_to_front(info->loc_point, info->end);
        return 1;
    }
    return 0;
}

static int set_to_list(amazed_t *info, char *str_copy)
{
    char **tab_tunnel = NULL;

    tab_tunnel = my_str_to_word_array(str_copy);
    if (tab_tunnel == NULL || tab_tunnel[0] == NULL || tab_tunnel[1] == NULL) {
        my_free(str_copy);
        return 84;
    }
    push_to_front(info->tunnel, set_tunnel(tab_tunnel[0], tab_tunnel[1]));
    my_free_array(tab_tunnel);
    return 0;
}

int is_tunnel(char *str, amazed_t *info)
{
    char *str_copy = NULL;

    if (str == NULL || info == NULL)
        return 0;
    str_copy = my_strdup(str);
    if (str_copy == NULL)
        return 0;
    for (int i = 0; str_copy[i] != '\0'; i++) {
        if (str_copy[i] == '-') {
            str_copy[i] = ' ';
            print_tunnel_title(info);
            set_to_list(info, str_copy);
            my_free(str_copy);
            return 1;
        }
    }
    my_free(str_copy);
    return 0;
}

static int check_line(char **tab, int i, amazed_t *info)
{
    if (is_start_or_end(tab, i, info) == 1) {
        info->len_node++;
        return 4;
    }
    if (is_tunnel(tab[i], info) == 1) {
        return 1;
    }
    if (tab[i] == NULL || tab[i][0] == '\0') {
        return 1;
    }
    if (tab[i + 1] == NULL || tab[i + 2] == NULL) {
        return 1;
    }
    if (tab[i][0] == '#') {
        return 1;
    }
    return set_point(tab, i, info);
}

static amazed_t *is_end_or_start(amazed_t *info)
{
    if (info->start == NULL || info->end == NULL) {
        my_free_struct_amazed(info);
        my_put_err("amazed: You didn't define any start room.\n");
        return NULL;
    }
    if (info->end == NULL) {
        my_free_struct_amazed(info);
        my_put_err("amazed: You didn't define any end room.\n");
        return NULL;
    }
    return info;
}

static amazed_t *is_good_value(amazed_t *info)
{
    if (info == NULL)
        return NULL;
    if (info->nb_robot <= 0) {
        my_put_err("nb robot <= 0\n");
        my_free_struct_amazed(info);
        return NULL;
    }
    if (is_end_or_start(info) == NULL)
        return NULL;
    if (info->loc_point == NULL || *info->loc_point == NULL ||
        info->tunnel == NULL || *info->tunnel == NULL) {
        my_put_err("amazed: Please define the tubes after the rooms.\n");
        my_free_struct_amazed(info);
        return NULL;
    }
    return info;
}

static void init_struct(amazed_t *info)
{
    info->len_node = 0;
    info->is_tunnels = 0;
    info->id_max = 0;
    info->start_or_end = 0;
}

static amazed_t *start_parsing(char **tab, amazed_t *info)
{
    int i = 0;

    while (tab[i] != NULL && !is_number(tab[i]))
        i++;
    if (tab[i] == NULL)
        return error_case_free_struct(info, tab);
    if (print_struct(info, tab[i]) == 84)
        return error_case_free_struct(info, NULL);
    for (i++; tab[i] != NULL;)
        i += check_line(tab, i, info);
    return info;
}

amazed_t *my_get_info_labyrinth(char *str)
{
    amazed_t *info = my_malloc(sizeof(amazed_t));
    char **tab;

    if (str == NULL || info == NULL) {
        my_free(info);
        return NULL;
    }
    init_struct(info);
    set_malloc_ll(info);
    tab = my_str_to_word_array(str);
    if (tab == NULL || tab[0] == NULL)
        return error_case_free_struct(info, tab);
    info = start_parsing(tab, info);
    my_free_array(tab);
    return is_good_value(info);
}
