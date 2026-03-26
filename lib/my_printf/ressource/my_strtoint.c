/*
** EPITECH PROJECT, 2025
** my str to int
** File description:
** my str to int
*/

#include "../my_printf.h"

int my_strtoint(char const *str, int len)
{
    int num = 0;
    int p = len - 1;

    for (int ch = 0; str[ch] != '\0'; ch++) {
        num = num + (str[ch] - 48) * my_power(10, p);
        p--;
    }
    return num;
}
