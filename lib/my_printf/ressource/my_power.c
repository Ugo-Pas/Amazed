/*
** EPITECH PROJECT, 2025
** my power
** File description:
** my power
*/

int my_power(int nb, int power)
{
    int p = 1;

    for (int el = 0; el < power; el++) {
        p = p * nb;
    }
    return p;
}
