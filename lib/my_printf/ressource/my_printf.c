/*
** EPITECH PROJECT, 2025
** version 2
** File description:
** version 2
*/

#include "../my_printf.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../../include/utility.h"

static const tab_t fptr = {handle_c, handle_i,
    handle_d, handle_s, handle_per, handle_o, handle_x,
    handle_xx, handle_u, handle_f, handle_p, handle_ff,
    handle_e, handle_ee, handle_n};

void check_for(va_list list, int el, char const *format, flag_t *flag)
{
    char *format_indentifier = "cids%oxXufpFeEn";

    for (int f = 0; format_indentifier[f] != '\0'; f++) {
        if (format_indentifier[f] == format[el]) {
            fptr[f](list, flag);
        }
    }
}

void check_f(va_list list, int *el, char const *format, flag_t *f)
{
    char *flag = "#0- +";
    int num = -1;

    for (int el2 = 0; el2 < 5; el2++) {
        if (flag[el2] == format[*el]) {
            change_flag(flag[el2], f);
            *el += 1;
        }
    }
    if (my_ispadding(format[*el]) == 1) {
        f->padding = my_getnbr(&format[*el]);
        *el += my_lenbase(f->padding, 10);
    }
}

int my_printf(const char *format, ...)
{
    va_list list;
    flag_t *f;
    int c = 0;

    va_start(list, format);
    f = my_malloc(sizeof(flag_t));
    reset(f);
    for (int el = 0; format[el] != '\0'; el++) {
        if (format[el] == '%' && format[el + 1] != '\0') {
            el++;
            check_f(list, &el, format, f);
            check_for(list, el, format, f);
        } else
            f->c = f->c + my_putchar(format[el]);
    }
    va_end(list);
    c = f->c;
    my_free(f);
    return c;
}
