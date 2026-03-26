/*
** EPITECH PROJECT, 2025
** flag d
** File description:
** flag d
*/

#include <stdarg.h>
#include "../my_printf.h"

int handle_d(va_list list, flag_t *f)
{
    int nb = va_arg(list, int);
    int padd = 0;

    if (!(-2147483647 <= nb && nb <= 2147483647)) {
        write(2, "Error: nb out of range\n", 23);
        return 0;
    }
    if (f->plus == 1)
        if (nb > 0)
            f->c += my_putchar('+');
    if (f->space && !f->plus)
        if (nb > 0)
            f->c += my_putchar(' ');
    padd = (f->space == 1) ? (my_lenbase(nb, 10) + 1) : (my_lenbase(nb, 10));
    for (int pad = 0; pad < f->padding - padd; pad++)
        f->c += (f->zero == 1) ? (my_putchar('0')) : (my_putchar(' '));
    my_put_nbr(nb);
    f->c += my_lenbase(nb, 10);
    reset(f);
    return 0;
}
