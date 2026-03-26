/*
** EPITECH PROJECT, 2025
** strcpy
** File description:
** strcpy
*/

char *my_strcpy(char *dest, char const *src)
{
    int index = 0;

    for (; src[index] != '\0'; index++) {
        dest[index] = src[index];
    }
    dest[index] = '\0';
    return dest;
}
