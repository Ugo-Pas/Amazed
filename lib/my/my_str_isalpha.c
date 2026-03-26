/*
** EPITECH PROJECT, 2025
** str
** File description:
** str
*/

#include "my.h"

int my_str_isalpha(char const *str)
{
    for (int index = 0; str[index] != '\0'; index++) {
        if (my_is_alpha(str[index]) == 0) {
            return 0;
        }
    }
    return 1;
}
