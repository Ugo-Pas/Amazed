/*
** EPITECH PROJECT, 2025
** my h
** File description:
** my h
*/

#ifndef MY_PRINTF_H
    #define MY_PRINTF_H
    #include <unistd.h>
    #include <stdarg.h>
    #include "utility.h"
    #include "my.h"
typedef struct flags {
    int hash;
    int plus;
    int minus;
    int zero;
    int space;
    int padding;
    int c;
} flag_t;
typedef int (*tab_t[])(va_list, flag_t *);
int my_put_nbr_o(int nb);
int my_put_nbr_x(int nb);
int my_put_float(double nb);
int my_put_nbr_xx(int nb);
int my_put_nbr_u(unsigned int nb);
int my_put_nbr_p(unsigned long int nb);
int my_strtoint(char const *str, int len);
int my_isdigit(char c);
int my_power(int nb, int power);
int my_lenbase(int nb, int base);
int my_lenlong(long unsigned int nb);
int my_lenpointer(unsigned long int nb);
int add_zero(int *b);
int calcul(int *a, int *b, int expo, double f);
int dis_expo(int a, int b, int count, int signe);
int eedis_expoee(int a, int b, int count, int signe);
int eexe_put(double nb);
int put_expo(double nb);
int my_put_float(double nb);
int handle_c(va_list list, flag_t *flag);
int handle_s(va_list list, flag_t *flag);
int handle_d(va_list list, flag_t *flag);
int handle_i(va_list list, flag_t *flag);
int handle_per(va_list list, flag_t *flag);
int handle_o(va_list list, flag_t *flag);
int handle_x(va_list list, flag_t *flag);
int handle_f(va_list list, flag_t *flag);
int handle_xx(va_list list, flag_t *flag);
int handle_u(va_list list, flag_t *flag);
int handle_p(va_list list, flag_t *flag);
int handle_ff(va_list list, flag_t *flag);
int handle_e(va_list list, flag_t *flag);
int handle_ee(va_list list, flag_t *flag);
int handle_n(va_list list, flag_t *flag);
int whatcount(int nb, int *count);
int countnbr(int a, int b, int count, int signe);
int my_printf(const char *format, ...);
int put_expo(double nb);
int eexe_put(double nb);
int add_zero(int *b);
int my_ispadding(char c);
void change_flag(char f, flag_t *flag);
void reset(flag_t *flag);
#endif /* !MY_PRINTF_H */
