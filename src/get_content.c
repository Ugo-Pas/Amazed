/*
** EPITECH PROJECT, 2026
** get
** File description:
** get
*/

#include "../include/amazed.h"

static int check_line(char *line)
{
    int len = my_strlen(line);
    int pos = 0;

    if (len > 2 && line[0] == '#' && line[1] != '#')
        return 0;
    for (int i = 2; line[i] != '\0'; i++)
        if (line[i] == '#') {
            pos = i;
            return pos;
        }
    pos = len;
    return pos;
}

static char *read_all(int *total_len)
{
    char *line = NULL;
    char *result = NULL;
    size_t size = 0;
    int len;
    int total = 0;

    while (getline(&line, &size, stdin) != -1) {
        len = check_line(line);
        if (len == 0)
            continue;
        result = my_realloc(result, total, total + len + 1);
        for (int i = 0; i < len; i++)
            result[total + i] = line[i];
        total += len;
    }
    if (result)
        result[total] = '\0';
    my_free(line);
    *total_len = total;
    return result;
}

char *get_content(void)
{
    int len;
    char *buff = read_all(&len);

    if (!buff)
        return NULL;
    return buff;
}
