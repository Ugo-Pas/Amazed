/*
** EPITECH PROJECT, 2025
** flag F
** File description:
** flag F
*/

#include <stdarg.h>
#include "../my_printf.h"

int handle_ff(va_list list, flag_t *f)
{
    double nb = va_arg(list, double);
    int padd = 0;

    if (f->space && !f->plus)
        if (nb > 0)
            f->c += my_putchar(' ');
    padd = (f->space == 1) ? (my_lenbase((int)nb, 10) +
        1 + 7) : (7 + my_lenbase((int)nb, 10));
    for (int pad = 0; pad < f->padding - padd; pad++)
        f->c += (f->zero == 1) ? (my_putchar('0')) : (my_putchar(' '));
    if (f->plus == 1)
        if (nb > 0)
            f->c += my_putchar('+');
    f->c += my_put_float(nb);
    reset(f);
    return 0;
}
