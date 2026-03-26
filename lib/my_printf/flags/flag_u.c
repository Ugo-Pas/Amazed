/*
** EPITECH PROJECT, 2025
** flag u
** File description:
** flag u
*/

#include <stdarg.h>
#include "../my_printf.h"

int handle_u(va_list list, flag_t *flag)
{
    long unsigned int nb = va_arg(list, long unsigned int);
    int padd = 0;

    padd = my_lenbase(nb, 10);
    for (int pad = 0; pad < flag->padding - padd; pad++)
        flag->c += (flag->zero == 1) ? (my_putchar('0')) : (my_putchar(' '));
    my_put_nbr_u(nb);
    flag->c = my_lenlong(nb);
    reset(flag);
    return 0;
}
