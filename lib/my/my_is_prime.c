/*
** EPITECH PROJECT, 2025
** is prime
** File description:
** is prime
*/

int my_is_prime(int nb)
{
    if (nb <= 1)
        return 0;
    if (nb == 2)
        return 1;
    if (nb % 2 == 0)
        return 0;
    for (int num = 3; num * num <= nb; num += 2) {
        if (nb % num == 0)
            return 0;
    }
    return 1;
}
