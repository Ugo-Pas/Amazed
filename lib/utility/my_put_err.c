/*
** EPITECH PROJECT, 2025
** my put err
** File description:
** put err
*/

#include "utility.h"

static int my_str_len(char *str)
{
    int len = 0;

    for (int index = 0; str[index] != '\0'; index++) {
        len++;
    }
    return len;
}

int my_put_err(char *str)
{
    write(2, str, my_str_len(str));
    return 84;
}
