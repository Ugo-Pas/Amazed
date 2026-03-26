/*
** EPITECH PROJECT, 2025
** my put nbr x
** File description:
** my_put_nbr_x
*/

#include "../my_printf.h"

int my_put_nbr_x(int nb)
{
    char temp[12];
    int i = 0;

    if (nb < 0) {
        my_putchar('-');
        nb = nb * -1;
    }
    while (16 <= nb) {
        temp[i] = (nb % 16 < 10) ? ('0' + nb % 16) : ('a' - 10 + (nb % 16));
        nb = nb / 16;
        i++;
    }
    temp[i] = '\0';
    if (nb < 10)
        my_putchar('0' + nb);
    else
        my_putchar('a' + nb - 10);
    for (int el = 0; temp[el] != '\0'; el++)
        my_putchar(temp[i - el - 1]);
    return 0;
}
