/*
** EPITECH PROJECT, 2025
** what count
** File description:
** what count
*/

int whatcount(int nb, int *count)
{
    *count = 0;
    if (nb == 0) {
        *count = 0;
        return *count;
    }
    if (nb > 0) {
        while (nb >= 10) {
            nb = nb / 10;
            *count += 1;
        }
    }
    if (nb < 0) {
        while (nb <= -10) {
            nb = nb / 10;
            *count += 1;
        }
    }
    return *count;
}
