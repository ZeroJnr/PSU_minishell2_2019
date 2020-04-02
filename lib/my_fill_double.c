/*
** EPITECH PROJECT, 2020
** PSU_tetris_2019
** File description:
** open_read_getstat_write
*/

#include "proto.h"

int my_fill_double(char *filepath)
{
    int fd = 0;
    size_t size = 0;
    char *buffer = NULL;

    if ((fd = open(filepath, O_RDONLY)) <= 0)
        return 84;
    else if ((size = getstat(filepath)) <= 0)
        return 84;
    if (!(buffer = malloc(sizeof(char) * (size))))
        return 84;
    if (read(fd, buffer, size) <= 0)
        return 84;
    return 0;
}