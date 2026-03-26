/*
** EPITECH PROJECT, 2025
** put char
** File description:
** put char
*/

#include "utility.h"

void my_free(void *data)
{
    if (!data) {
        return;
    } else {
        free(data);
    }
}
