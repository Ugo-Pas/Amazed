/*
** EPITECH PROJECT, 2025
** str len
** File description:
** str len
*/

int my_strlen(char *str)
{
    int len = 0;

    if (!str)
        return -0;
    for (int index = 0; str[index] != '\0'; index++) {
        len++;
    }
    return len;
}
