/*
** EPITECH PROJECT, 2025
** my read
** File description:
** read
*/

#include "utility.h"

ssize_t my_read(int fd, char *buffer, size_t nb_bytes, int print)
{
    ssize_t value = read(fd, buffer, nb_bytes);

    if (value == -1) {
        if (print)
            my_put_err("Read error\n");
        return -1;
    }
    if (value == 0 && print) {
        my_put_err("End of file\n");
    }
    return value;
}
