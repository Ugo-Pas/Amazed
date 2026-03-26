/*
** EPITECH PROJECT, 2025
** my is alpha
** File description:
** my is alpha
*/

int my_is_alpha(char c)
{
    if (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z')) {
        return 1;
    }
    return 0;
}
