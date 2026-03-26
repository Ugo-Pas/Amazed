/*
** EPITECH PROJECT, 2025
** func 2
** File description:
** put expo
*/

#include "../my_printf.h"

int put_expo(double nb)
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
    return dis_expo(a, b, count, signe);
}
