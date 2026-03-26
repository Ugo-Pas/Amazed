/*
** EPITECH PROJECT, 2026
** str
** File description:
** str
*/

#include "my.h"

char *my_strndup(char const *src, int n)
{
    int len = 0;
    char *dest = NULL;

    if (!src || n < 0)
        return NULL;
    len = my_strlen(src);
    if (n > len)
        n = len;
    dest = my_malloc(sizeof(char) * (n + 1));
    if (!dest)
        return NULL;
    my_strncpy(dest, src, n);
    dest[n] = '\0';
    return dest;
}
