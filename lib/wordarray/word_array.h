/*
** EPITECH PROJECT, 2025
** word array
** File description:
** word array
*/

#ifndef WORD_ARRAY_H
    #define WORD_ARRAY_H
    #include <stdlib.h>
    #include <unistd.h>
    #include "utility.h"
    #include "my.h"

typedef struct word_arr {
    int ele;
    char const *str;
    int in_w;
    int nb_w;
    int l_w;
} arr_t;

int my_show_word_array(char **tab);
char **my_str_to_word_array(char const *str);
void my_free_array(char **tab);
char *my_strndup(char const *src, int n);
int my_show_word_array(char **tab);
int my_array_len(char **tab);

#endif /* !WORD_ARRAY_H */
