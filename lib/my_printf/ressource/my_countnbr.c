/*
** EPITECH PROJECT, 2025
** count nbr
** File description:
** count nbr
*/

#include "../my_printf.h"

int countnbr(int a, int b, int count, int signe)
{
    int finalcount = 0;

    if (signe != 0) {
        finalcount++;
    }
    finalcount += my_lenbase(a, 10) + my_lenbase(b, 10) + 5;
    return finalcount;
}
