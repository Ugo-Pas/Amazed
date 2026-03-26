/*
** EPITECH PROJECT, 2025
** strlowcase
** File description:
** low case
*/

#include "my.h"

char *my_strlowcase(char *str)
{
    if (!str)
        return NULL;
    for (int index = 0; str[index] != '\0'; index++) {
        if ('A' <= str[index] && str[index] <= 'Z') {
            str[index] = str[index] + 32;
        }
    }
    return str;
}
