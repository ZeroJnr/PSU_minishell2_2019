/*
** EPITECH PROJECT, 2020
** unsetenv
** File description:
** unste env
*/

#include "proto_minishell.h"
#include <stdio.h>

int my_unsetenv(char *buffer, index_t *index)
{
    int y = 0;

    while (my_strncmp(ENV[y], buffer, my_lenght(buffer)) != 0)
        y++;
    while (ENV[y]) {
        ENV[y] = ENV[y + 1];
        y++;
    }
    return 0;
}