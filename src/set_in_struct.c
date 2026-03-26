/*
** EPITECH PROJECT, 2026
** set_in_struct
** File description:
** set_in_struct
*/

#include "../include/amazed.h"

void set_malloc_ll(amazed_t *info)
{
    if (info == NULL)
        return;
    info->start = NULL;
    info->end = NULL;
    info->nb_robot = 0;
    info->tunnel = my_malloc(sizeof(llist_t *));
    if (info->tunnel != NULL)
        *info->tunnel = NULL;
    info->loc_point = my_malloc(sizeof(llist_t *));
    if (info->loc_point != NULL)
        *info->loc_point = NULL;
}

tunnel_t *set_tunnel(char *t_one, char *t_two)
{
    tunnel_t *info = my_malloc(sizeof(tunnel_t));

    if (info == NULL)
        return NULL;
    info->lien_one = my_strdup(t_one);
    info->lien_two = my_strdup(t_two);
    my_putstr(info->lien_one);
    my_putchar('-');
    my_putstr(info->lien_two);
    my_putchar('\n');
    return info;
}

loc_t *set_loc_point(char *name, char *x, char *y, amazed_t *ama)
{
    loc_t *info = my_malloc(sizeof(loc_t));

    if (info == NULL)
        return NULL;
    info->before = (!ama->start) ? (1) : (0);
    info->name = my_strdup(name);
    info->x = my_str_to_int(x, my_strlen(x));
    info->y = my_str_to_int(y, my_strlen(y));
    print_loc(info);
    return info;
}

int set_point(char **tab, int i, amazed_t *info)
{
    loc_t *tmp = NULL;

    tmp = set_loc_point(tab[i], tab[i + 1], tab[i + 2], info);
    tmp->id = info->id_max;
    info->id_max++;
    push_to_front(info->loc_point, tmp);
    info->len_node++;
    return 3;
}
