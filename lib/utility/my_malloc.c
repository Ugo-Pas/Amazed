/*
** EPITECH PROJECT, 2025
** my malloc
** File description:
** my malloc
*/

#include "utility.h"

void *my_malloc(size_t size)
{
    void *ptr = malloc(size);

    if (ptr == NULL) {
        my_put_err("The malloc failed\n");
        return NULL;
    }
    return ptr;
}
