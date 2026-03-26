/*
** EPITECH PROJECT, 2026
** str
** File description:
** str
*/

#include "my.h"

char *my_strdup(char const *src)
{
    char *dest = my_malloc(sizeof(char) * (my_strlen(src) + 1));

    if (!dest)
        return NULL;
    my_strcpy(dest, src);
    return dest;
}
