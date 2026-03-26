/*
** EPITECH PROJECT, 2025
** my open
** File description:
** my open
*/

#include "utility.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int my_open(const char *file, int flag, int print)
{
    int fd;

    fd = open(file, flag);
    if (fd == -1) {
        if (print == 1)
            my_put_err("The file can't be opened\n");
        return -1;
    }
    return fd;
}
