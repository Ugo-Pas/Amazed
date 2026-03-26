/*
** EPITECH PROJECT, 2025
** find prime
** File description:
** find prime
*/

#include "my.h"

int my_find_prime_sup(int nb)
{
    int num = nb;

    while (!my_is_prime(num)) {
        num++;
    }
    return num;
}
