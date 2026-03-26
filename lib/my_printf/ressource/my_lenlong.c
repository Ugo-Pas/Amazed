/*
** EPITECH PROJECT, 2025
** my len long
** File description:
** my len long
*/

int my_lenlong(long unsigned int nb)
{
    int len = 0;

    while (10 <= nb) {
        nb = nb / 10;
        len++;
    }
    len++;
    return len;
}
