/*
** EPITECH PROJECT, 2025
** function put3
** File description:
** calcul
*/

#include "../my_printf.h"

int calcul(int *a, int *b, int expo, double f)
{
    if (expo == 0) {
        *a = (int)f;
        *b = (int)((((f - *a) * 1000000) + 0.5));
    } else {
        *a = (int)f / expo;
        *b = (int)((((f / expo) - *a) * 1000000) + 0.5);
    }
    return 0;
}
