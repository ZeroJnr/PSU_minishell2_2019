/*
** EPITECH PROJECT, 2020
** unsetenv
** File description:
** unste env
*/

#include "proto_minishell.h"
#include <stdio.h>

void unsetenv_cmd(char *path, index_t *index)
{
    char **buffer = str_to_word_array(path);

    if (my_strncmp(buffer[0], "unsetenv", my_lenght("unsetenv")) == 0) {
        my_unsetenv(buffer[1], index);
        index->my_bool.built = true;
    }
}

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