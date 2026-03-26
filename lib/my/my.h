/*
** EPITECH PROJECT, 2025
** my
** File description:
** my
*/

#ifndef MY_H
    #define MY_H
    #include <stdlib.h>
    #include "utility.h"
//en plus / dependance
int my_is_digit(char c);
int my_str_to_int(char const *str, int len);
int my_compute_power_it(int nb, int power);
int my_intcmp(int a, int b);
void *my_malloc(size_t size);
int my_put_err(char *str);
int my_is_alpha(char c);
int my_is_lower(char c);
int my_is_upper(char c);

//lib workshop
int my_putchar(char c);
int my_isneg(int nb);
int my_put_nbr(int nb);
void my_swap(int *a, int *b);
int my_putstr(char const *str);
int my_strlen(char const *str);
int my_getnbr(char const *str);
void my_sort_int_array(int *tab, int size);
int my_compute_power_rec(int nb, int power);
int my_compute_square_root(int nb);
int my_is_prime(int nb);
int my_find_prime_sup(int nb);
char *my_strcpy(char *dest, char const *src);
char *my_strncpy(char *dest, char const *src, int n);
char *my_revstr(char *str);
char *my_strstr(char *str, char const *to_find);
int my_strcmp(char const *s1, char const *s2);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strupcase(char *str);
char *my_strlowcase(char *str);
char *my_strcapitalize(char *str);
int my_str_isalpha(char const *str);
int my_str_isnum(char const *str);
int my_str_islower(char const *str);
int my_str_isupper(char const *str);
int my_str_isprintable(char const *str);
char *my_strcat(char *dest, char const *src);
char *my_strncat(char *dest, char const *src, int nb);
char *my_strdup(char const *src);

#endif /* !MY_H */
