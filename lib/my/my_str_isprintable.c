/*
** EPITECH PROJECT, 2025
** print
** File description:
** print
*/

#include "my.h"

int my_str_isprintable(char const *str)
{
    for (int index = 0; str[index] != '\0'; index++) {
        if ((str[index] >= 32 && str[index] <= 126)) {
            return 0;
        }
    }
    return 1;
}
