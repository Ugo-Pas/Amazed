/*
** EPITECH PROJECT, 2025
** flag p
** File description:
** flag p
*/

#include <stdarg.h>
#include "../my_printf.h"

int handle_p(va_list list, flag_t *flag)
{
    unsigned long int nb = va_arg(list, unsigned long int);

    my_put_nbr_p(nb);
    flag->c = my_lenpointer(nb);
    return 0;
}
