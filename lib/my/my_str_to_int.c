/*
** EPITECH PROJECT, 2025
** str to int
** File description:
** str to int
*/

#include "my.h"

int my_str_to_int(char const *str, int len)
{
    int num = 0;
    int p = len - 1;

    for (int ch = 0; str[ch] != '\0'; ch++) {
        num = num + (str[ch] - 48) * my_compute_power_it(10, p);
        p--;
    }
    return num;
}
