/*
** EPITECH PROJECT, 2025
** my put float
** File description:
** my_put_float
*/

#include "../my_printf.h"

int my_put_float(double nb)
{
    int a;
    int b;
    float f = nb;
    int incr = 5;

    a = (int)f;
    b = (nb - a) * 1000000;
    my_put_nbr(a);
    my_putchar('.');
    my_put_nbr(b);
    if (b == 0) {
        while (b % 10 != 0) {
            incr--;
        }
        for (int j; j != incr; j++)
            my_putchar('0');
    }
    return my_lenbase(a, 10) + 1 + my_lenbase(b, 10);
}
