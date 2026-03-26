/*
** EPITECH PROJECT, 2025
** is neg
** File description:
** is neg
*/

#include "my.h"

int my_isneg(int nb)
{
    if (nb < 0) {
        my_putchar('N');
    } else {
        my_putchar('P');
    }
    return 0;
}
