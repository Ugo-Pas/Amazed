/*
** EPITECH PROJECT, 2025
** strncmp
** File description:
** strncmp
*/

#include "my.h"

static int diff(char c1, char c2)
{
    if (c1 > c2)
        return 1;
    if (c1 < c2)
        return -1;
    return 0;
}

int my_strncmp(char const *s1, char const *s2, int n)
{
    int i = 0;

    if (n <= 0)
        return 0;
    while (i < n && s1[i] != '\0' && s2[i] != '\0') {
        if (s1[i] != s2[i])
            return diff(s1[i], s2[i]);
        i++;
    }
    if (i == n)
        return 0;
    return diff(s1[i], s2[i]);
}
