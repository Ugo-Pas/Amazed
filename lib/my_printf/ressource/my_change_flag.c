/*
** EPITECH PROJECT, 2025
** change flag
** File description:
** change flag
*/

#include "../my_printf.h"

void change_flag(char f, flag_t *flag)
{
    if (f == '#')
        flag->hash = 1;
    if (f == '-')
        flag->minus = 1;
    if (f == '+')
        flag->plus = 1;
    if (f == ' ')
        flag->space = 1;
    if (f == '0')
        flag->zero = 1;
}
