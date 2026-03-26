/*
** EPITECH PROJECT, 2025
** str
** File description:
** str
*/

#include "my.h"

int my_str_isnum(char const *str)
{
    for (int index = 0; str[index] != '\0'; index++) {
        if (my_is_digit(str[index]) == 0) {
            return 0;
        }
    }
    return 1;
}
