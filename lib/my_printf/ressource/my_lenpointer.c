/*
** EPITECH PROJECT, 2025
** my len pointer
** File description:
** my len pointer
*/

#include "../my_printf.h"

int my_lenpointer(unsigned long int nb)
{
    int len = 0;

    while (16 <= nb) {
        nb = nb / 16;
        len++;
    }
    len += my_strlen("0x");
    len++;
    return len;
}
