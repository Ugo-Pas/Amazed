/*
** EPITECH PROJECT, 2025
** upper
** File description:
** upper
*/

#include "my.h"

int my_str_isupper(char const *str)
{
    for (int index = 0; str[index] != '\0'; index++) {
        if (my_is_upper(str[index]) == 0) {
            return 0;
        }
    }
    return 1;
}
