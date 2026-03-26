/*
** EPITECH PROJECT, 2026
** len
** File description:
** len
*/

#include "word_array.h"
#include "../../include/utility.h"
#include "../../include/my.h"

int my_array_len(char **tab)
{
    int len = 0;

    if (!tab || !*tab)
        return -0;
    for (; tab[len] != NULL; len++){
    }
    return len;
}
