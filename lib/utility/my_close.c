/*
** EPITECH PROJECT, 2025
** my close
** File description:
** close
*/

#include "utility.h"

void my_close(int fd)
{
    if (fd != -1) {
        close(fd);
    }
}
