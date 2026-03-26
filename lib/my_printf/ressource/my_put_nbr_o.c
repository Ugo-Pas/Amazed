/*
** EPITECH PROJECT, 2025
** my put nbr o
** File description:
** my put nbr o
*/

#include "../my_printf.h"

int my_put_nbr_o(int nb)
{
    char temp[32];
    int i = 0;

    if (nb < 0) {
        my_putchar('-');
        nb = nb * -1;
    }
    while (8 <= nb) {
        temp[i] = ('0' + nb % 8);
        nb = nb / 8;
        i++;
    }
    temp[i] = '\0';
    my_putchar('0' + nb);
    for (int el = 0; temp[el] != '\0'; el++) {
        my_putchar(temp[i - el - 1]);
    }
    return 0;
}
