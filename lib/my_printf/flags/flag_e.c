/*
** EPITECH PROJECT, 2025
** flag e
** File description:
** flag e
*/

#include "../my_printf.h"
#include <stdarg.h>

int handle_e(va_list list, flag_t *f)
{
    double nb = va_arg(list, double);
    int padd = 0;

    if (f->space && !f->plus)
        if (nb > 0)
            f->c += my_putchar(' ');
    padd = (f->space == 1) ? (my_lenbase((int)nb, 10) +
        1 + 10) : (10 + my_lenbase((int)nb, 10));
    for (int pad = 0; pad < f->padding - padd; pad++)
        f->c += (f->zero == 1) ? (my_putchar('0')) : (my_putchar(' '));
    if (f->plus == 1)
        if (nb > 0)
            f->c += my_putchar('+');
    f->c += put_expo(nb);
    reset(f);
    return 0;
}
