/*
** EPITECH PROJECT, 2025
** function put3
** File description:
** fonction put3
*/

#include "../my_printf.h"

int eexe_put(double nb)
{
    int count = 0;
    int expo = 1;
    int a;
    int b = 0;
    int signe = 0;
    double f = 0;

    if (nb < 0) {
        nb = nb * -1;
        signe++;
    }
    f = nb;
    whatcount((int)nb, &count);
    for (int y = 0; y < count; y++) {
        expo = expo * 10;
    }
    calcul(&a, &b, expo, f);
    return eedis_expoee(a, b, count, signe);
}
