/*
** EPITECH PROJECT, 2025
** flag o
** File description:
** flag o
*/

#include <stdarg.h>
#include "../my_printf.h"

int handle_o(va_list list, flag_t *flag)
{
    int nb = va_arg(list, int);
    int padd = 0;

    flag->c += (flag->hash == 1) ? (my_putchar('0')) : (0);
    padd = (flag->hash == 1) ? (my_lenbase(nb, 8) + 1) : (my_lenbase(nb, 8));
    for (int pad = 0; pad < flag->padding - padd; pad++)
        flag->c += (flag->zero == 1) ? (my_putchar('0')) : (my_putchar(' '));
    my_put_nbr_o(nb);
    flag->c += my_lenbase(nb, 8);
    reset(flag);
    return 0;
}
