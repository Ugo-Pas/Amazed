/*
** EPITECH PROJECT, 2025
** add zero
** File description:
** add_zero
*/

#include "../my_printf.h"

int add_zero(int *b)
{
    while (*b < 100000) {
        *b = *b * 10;
    }
    return *b;
}
