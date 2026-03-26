/*
** EPITECH PROJECT, 2026
** print_struct
** File description:
** print_struct
*/

#include "../include/amazed.h"

int print_struct(amazed_t *info, char *tab)
{
    info->nb_robot = my_str_to_int(tab, my_strlen(tab));
    if (info->nb_robot <= 0)
        return my_put_err("amazed: Would be funniest with robots, nah ?\n");
    my_putstr("#number_of_robots\n");
    my_put_nbr(info->nb_robot);
    my_putchar('\n');
    my_putstr("#rooms\n");
    return 0;
}

void print_tunnel_title(amazed_t *info)
{
    if (info->is_tunnels == 0) {
        my_putstr("#tunnels\n");
        info->is_tunnels++;
    }
}

void print_loc(loc_t *f)
{
    my_putstr(f->name);
    my_putchar(' ');
    my_put_nbr(f->x);
    my_putchar(' ');
    my_put_nbr(f->y);
    my_putchar('\n');
}
