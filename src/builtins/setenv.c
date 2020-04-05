/*
** EPITECH PROJECT, 2020
** steenv
** File description:
** setenv : adding value into the env
*/

#include "proto_minishell.h"
#include <stdlib.h>
#include <stdio.h>

static char *replace_value(char *str)
{
    char *buffer = malloc(sizeof(char) * my_lenght(str) + 1);

    for (int i = 0; str[i - 1] != '='; i++)
        buffer[i] = str[i];
    return buffer;
}

int my_setenv(char *path, char *value, index_t *index)
{
    char *buffer = malloc(sizeof(char) * my_lenght(path) + 1);
    int count = 0;

    for (int y = 0; ENV[y]; y++) {
        if (my_strncmp(path, ENV[y], my_lenght(path)) == 0) {
            ++count;
            buffer = ENV[y] + my_chr(ENV[y], '=');
            buffer = value;
            ENV[y] = replace_value(ENV[y]);
            ENV[y] = my_strcat(ENV[y], buffer);
        }
    }
    return 0;
}