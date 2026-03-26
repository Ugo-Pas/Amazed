/*
** EPITECH PROJECT, 2025
** flag c
** File description:
** flag c
*/

#include <stdarg.h>
#include "../my_printf.h"

int handle_c(va_list list, flag_t *flag)
{
    my_putchar(va_arg(list, int));
    flag->c += 1;
    return 0;
}
