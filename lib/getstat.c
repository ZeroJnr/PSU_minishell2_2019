/*
** EPITECH PROJECT, 2020
** PSU_tetris_2019
** File description:
** getsize
*/

#include "proto.h"

int getstat(char const *filepath)
{
    struct stat buf = {0};

    stat(filepath, &buf);
    if (buf.st_size == 0)
        return -1;
    else
        return (buf.st_size);
}