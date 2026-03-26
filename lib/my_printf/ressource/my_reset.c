/*
** EPITECH PROJECT, 2025
** reset flag
** File description:
** reset flag
*/

#include "../my_printf.h"

void reset(flag_t *flag)
{
    flag->hash = 0;
    flag->minus = 0;
    flag->plus = 0;
    flag->space = 0;
    flag->zero = 0;
    flag->padding = 0;
}
