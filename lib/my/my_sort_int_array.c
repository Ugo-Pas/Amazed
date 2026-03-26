/*
** EPITECH PROJECT, 2025
** sort int array
** File description:
** sort
*/

#include "my.h"

static void swap_values(int *a, int *b)
{
    int tmp;

    if (my_intcmp(*a, *b) == 1) {
        tmp = *a;
        *a = *b;
        *b = tmp;
    }
}

void my_sort_int_array(int *tab, int size)
{
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            swap_values(&tab[j], &tab[j + 1]);
        }
    }
}
