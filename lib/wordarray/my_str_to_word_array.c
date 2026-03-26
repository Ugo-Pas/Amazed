/*
** EPITECH PROJECT, 2025
** str to word array
** File description:
** str to word array
*/

#include "word_array.h"
#include "../../include/my.h"
#include "../../include/utility.h"

int my_show_word_array(char **tab)
{
    if (!tab || !*tab)
        return -0;
    for (int ch = 0; tab[ch] != NULL; ch++) {
        write(1, tab[ch], my_strlen(tab[ch]));
        write(1, "\n", 1);
    }
    return 0;
}

static int is_non_separator(char c)
{
    if ('a' <= c && c <= 'z')
        return 1;
    if ('A' <= c && c <= 'Z')
        return 1;
    if ('0' <= c && c <= '9' || c == '#')
        return 1;
    if (c == '/' || c == '-' || c == '_' || c == '.')
        return 1;
    return 0;
}

static int count_words(const char *str)
{
    int count = 0;
    int in_word = 0;

    for (int i = 0; str[i] != '\0'; i = i + 1) {
        if (is_non_separator(str[i]) == 1 && in_word == 0) {
            count = count + 1;
            in_word = 1;
        }
        if (is_non_separator(str[i]) == 0) {
            in_word = 0;
        }
    }
    return count;
}

arr_t *create_array(char const *str)
{
    arr_t *str_array;

    str_array = my_malloc(sizeof(arr_t));
    if (!str_array)
        return NULL;
    str_array->ele = 0;
    str_array->str = str;
    str_array->in_w = 0;
    str_array->nb_w = 0;
    str_array->l_w = 0;
    return str_array;
}

static void final(arr_t *arr, char **res)
{
    if (!arr || !res)
        return;
    if (arr->in_w == 1) {
        res[arr->nb_w] = my_strndup(arr->str + arr->ele - arr->l_w, arr->l_w);
        arr->nb_w += 1;
    }
    res[arr->nb_w] = NULL;
}

char **my_str_to_word_array(char const *str)
{
    int words = count_words(str);
    char **res = my_malloc(sizeof(char *) * (words + 1));
    arr_t *arr = create_array(str);

    for (; str[arr->ele] != '\0'; arr->ele += 1) {
        if (is_non_separator(str[arr->ele])) {
            arr->in_w = 1;
            arr->l_w += 1;
        }
        if (!is_non_separator(str[arr->ele]) && arr->in_w == 1) {
            res[arr->nb_w] = my_strndup(str + arr->ele - arr->l_w, arr->l_w);
            arr->nb_w += 1;
            arr->l_w = 0;
            arr->in_w = 0;
        }
    }
    final(arr, res);
    my_free(arr);
    return res;
}

void my_free_array(char **tab)
{
    if (!tab)
        return;
    if (!*tab) {
        my_free(tab);
        return;
    }
    for (int ele = 0; tab[ele] != NULL; ele++) {
        my_free(tab[ele]);
    }
    my_free(tab);
}
