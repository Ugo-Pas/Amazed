/*
** EPITECH PROJECT, 2025
** compute square root
** File description:
** square root
*/

int my_compute_square_root(int nb)
{
    if (nb < 0)
        return 0;
    if (nb == 0)
        return 0;
    for (int num = 1; num * num <= nb; num++) {
        if (num * num == nb)
            return num;
    }
    return 0;
}
