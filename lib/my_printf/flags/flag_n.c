/*
** EPITECH PROJECT, 2025
** flag n
** File description:
** flag n
*/

#include <stdarg.h>
#include "../my_printf.h"

int handle_n(va_list list, flag_t *flag)
{
    int *p;

    p = va_arg(list, int*);
    *p = flag->c;
    return 0;
}
