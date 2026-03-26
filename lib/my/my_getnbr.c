/*
** EPITECH PROJECT, 2025
** get nbr
** File description:
** get nbr
*/

#include "my.h"
#include "../../include/utility.h"

int my_getnbr(char const *str)
{
    int num = 0;
    int in_num = 1;
    char *num_start;
    int index = 0;

    num_start = my_malloc((my_strlen(str) + 1) * sizeof(char));
    if (!num_start)
        return -0;
    for (int ch = 0; str[ch] != '\0' && in_num == 1; ch++) {
        if (!my_is_digit(str[ch]))
            in_num = 0;
        if (my_is_digit(str[ch])) {
            num_start[index] = str[ch];
            index++;
        }
    }
    num_start[index] = '\0';
    num = my_str_to_int(num_start, index);
    my_free(num_start);
    return num;
}
