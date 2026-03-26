/*
** EPITECH PROJECT, 2025
** flag E
** File description:
** Flag E
*/

#include "../my_printf.h"
#include <stdarg.h>

int handle_ee(va_list list, flag_t *f)
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
    f->c += eexe_put(nb);
    reset(f);
    return 0;
}
