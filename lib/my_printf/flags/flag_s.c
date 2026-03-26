/*
** EPITECH PROJECT, 2025
** flag s
** File description:
** flag s
*/

#include <stdarg.h>
#include "../my_printf.h"

int handle_s(va_list list, flag_t *flag)
{
    char *str = va_arg(list, char *);

    my_putstr(str);
    flag->c += my_strlen(str);
    return 0;
}
