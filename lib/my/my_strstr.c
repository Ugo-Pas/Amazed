/*
** EPITECH PROJECT, 2025
** strstr
** File description:
** strstr
*/

#include "my.h"

char *my_strstr(char *str, char const *to_find)
{
    int len = my_strlen(str);
    int len_to_find = my_strlen(to_find);

    if (len_to_find == 0 || !str)
        return str;
    for (int index = 0; index <= len - len_to_find; index++) {
        if (my_strncmp(&str[index], to_find, len_to_find) == 0)
            return &str[index];
    }
    return NULL;
}
