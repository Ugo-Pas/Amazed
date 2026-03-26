/*
** EPITECH PROJECT, 2025
** revstr
** File description:
** revstr
*/

#include "my.h"

char *my_revstr(char *str)
{
    int len = 0;
    char temp;

    if (!str)
        return NULL;
    len = my_strlen(str);
    for (int index = 0; index < len / 2; index++) {
        temp = str[index];
        str[index] = str[len - 1 - index];
        str[len - 1 - index] = temp;
    }
    return str;
}
