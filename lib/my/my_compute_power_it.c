/*
** EPITECH PROJECT, 2025
** compute power it
** File description:
** power
*/

int my_compute_power_it(int nb, int power)
{
    int p = 1;

    for (int el = 0; el < power; el++) {
        p = p * nb;
    }
    return p;
}
