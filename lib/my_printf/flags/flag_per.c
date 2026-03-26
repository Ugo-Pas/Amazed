/*
** EPITECH PROJECT, 2025
** flag per
** File description:
** flag per
*/

#include <stdarg.h>
#include "../my_printf.h"

int handle_per(va_list list, flag_t *flag)
{
    flag->c += my_putchar('%');
    reset(flag);
    return 0;
}
