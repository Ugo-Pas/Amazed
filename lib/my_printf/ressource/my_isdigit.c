/*
** EPITECH PROJECT, 2025
** my isdigit
** File description:
** my isdigit
*/

#include "../my_printf.h"

int my_isdigit(char c)
{
    if ('0' <= c && c <= '9') {
        return 1;
    }
    return 0;
}
