/*
** EPITECH PROJECT, 2025
** my len base
** File description:
** my len base
*/

int my_lenbase(int nb, int base)
{
    int len = 0;

    if (nb < 0) {
        nb = nb * -1;
        len++;
    }
    while (base <= nb) {
        nb = nb / base;
        len++;
    }
    len++;
    return len;
}
