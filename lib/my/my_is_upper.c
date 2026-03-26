/*
** EPITECH PROJECT, 2025
** upper
** File description:
** upper
*/

#include "my.h"

int my_is_upper(char c)
{
    if ('A' <= c && c <= 'Z') {
        return 1;
    }
    return 0;
}
