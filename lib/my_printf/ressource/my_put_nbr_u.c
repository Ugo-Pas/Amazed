/*
** EPITECH PROJECT, 2025
** my put nbr u
** File description:
** my_put_nbr_u
*/

#include "../my_printf.h"

int my_put_nbr_u(unsigned int nb)
{
    char temp[12];
    int i = 0;

    while (10 <= nb) {
        temp[i] = ('0' + nb % 10);
        nb = nb / 10;
        i++;
    }
    temp[i] = '\0';
    my_putchar('0' + nb);
    for (int el = 0; temp[el] != '\0'; el++) {
        my_putchar(temp[i - el - 1]);
    }
    return 0;
}
