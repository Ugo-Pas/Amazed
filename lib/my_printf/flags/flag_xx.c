/*
** EPITECH PROJECT, 2025
** flag X
** File description:
** flag X
*/

#include <stdarg.h>
#include "../my_printf.h"

int handle_xx(va_list list, flag_t *f)
{
    int nb = va_arg(list, int);
    int padd = 0;

    padd = (f->hash == 1) ? (my_lenbase(nb, 16) + 2) : (my_lenbase(nb, 16));
    for (int pad = 0; pad < f->padding - padd; pad++)
        f->c += (f->zero == 1) ? 0 : (my_putchar(' '));
    if (f->hash == 1)
        f->c += my_putstr("0X");
    for (int pad = 0; pad < f->padding - padd; pad++)
        f->c += (f->zero == 1) ? (my_putchar('0')) : 0;
    my_put_nbr_xx(nb);
    f->c += my_lenbase(nb, 16);
    reset(f);
    return 0;
}
