/*
** EPITECH PROJECT, 2025
** function put3
** File description:
** dis expo
*/

#include "../my_printf.h"

int dis_expo(int a, int b, int count, int signe)
{
    if (signe != 0) {
        my_putchar('-');
    }
    add_zero(&b);
    my_put_nbr(a);
    my_putchar('.');
    my_put_nbr(b);
    my_putstr("e+");
    if (count < 10) {
        my_putchar('0');
    }
    my_put_nbr(count);
    return countnbr(a, b, count, signe);
}
