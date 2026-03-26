/*
** EPITECH PROJECT, 2026
** realloc
** File description:
** realloc
*/

#include "utility.h"

char *my_realloc(char *old, int old_size, int new_size)
{
    char *new = my_malloc(new_size);
    int i = 0;

    if (!new)
        return NULL;
    while (i < old_size) {
        new[i] = old[i];
        i++;
    }
    my_free(old);
    return new;
}
