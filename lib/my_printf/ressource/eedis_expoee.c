/*
** EPITECH PROJECT, 2025
** function put3
** File description:
** eedis expoee
*/

#include "../my_printf.h"

int eedis_expoee(int a, int b, int count, int signe)
{
    int temp = 0;

    if (signe != 0) {
        my_putchar('-');
    }
    add_zero(&b);
    my_put_nbr(a);
    my_putchar('.');
    my_put_nbr(b);
    my_putstr("E+");
    if (temp + count < 10) {
        my_putchar('0');
    }
    my_put_nbr(count);
    return countnbr(a, b, count, signe);
}
