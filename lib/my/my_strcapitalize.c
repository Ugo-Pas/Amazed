/*
** EPITECH PROJECT, 2025
** str
** File description:
** str
*/

#include "my.h"

char *my_strcapitalize(char *str)
{
    if (!str)
        return NULL;
    my_strlowcase(str);
    if (my_is_alpha(str[0]))
        str[0] -= 32;
    for (int index = 1; str[index] != '\0'; index++) {
        if (!my_is_alpha(str[index - 1]) && my_is_alpha(str[index])) {
            str[index] -= 32;
        }
    }
    return str;
}
