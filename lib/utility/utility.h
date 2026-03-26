/*
** EPITECH PROJECT, 2025
** my
** File description:
** my
*/

#ifndef UTILITY_H
    #define UTILITY_H
    #include <stdlib.h>
    #include <unistd.h>

void *my_malloc(size_t size);
char *my_realloc(char *old, int old_size, int new_size);
void my_free(void *data);

int my_put_err(char *str);

ssize_t my_read(int fd, char *buffer, size_t nb_bytes, int print);
int my_open(char const *file, int flag, int print);
void my_close(int fd);

#endif /* !UTILITY_H */
