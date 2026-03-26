/*
** EPITECH PROJECT, 2025
** put str
** File description:
** put str
*/

#include "my.h"

int my_putstr(char const *str)
{
    for (int index = 0; str[index] != '\0'; index++) {
        my_putchar(str[index]);
    }
    return 0;
}
