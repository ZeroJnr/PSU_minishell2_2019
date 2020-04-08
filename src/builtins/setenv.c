/*
** EPITECH PROJECT, 2020
** steenv
** File description:
** setenv : adding value into the env
*/

#include "proto_minishell.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

static char *replace_value(char *str)
{
    char *buffer = malloc(sizeof(char) * my_lenght(str) + 1);

    for (int i = 0; str[i - 1] != '='; i++)
        buffer[i] = str[i];
    return buffer;
}

static void create_env_var(index_t *index, char *buffer, __attribute__((unused)) char *value)
{
    int i = 0;

    while (ENV[i])
        i++;
    ENV[i + 1] = my_strcat(ENV[i], buffer);
}

void setenv_cmd(char *path, index_t *index)
{
    char **buffer = str_to_word_array(path);

    if (my_strncmp(buffer[0], "setenv", my_lenght("setenv")) == 0) {
        my_setenv(buffer[1], buffer[2], index);
        index->my_bool.built = true;
    }
}

int my_setenv(char *path, char *value, index_t *index)
{
    char *buffer = malloc(sizeof(char) * my_lenght(path) + 1);
    int count = 0;
    bool check_my_path = false;

    for (int y = 0; ENV[y]; y++) {
        if (my_strncmp(path, ENV[y], my_lenght(path)) == 0) {
            ++count;
            check_my_path = true;
            buffer = ENV[y] + my_strchr(ENV[y], '=');
            buffer = value;
            ENV[y] = replace_value(ENV[y]);
            ENV[y] = my_strcat(ENV[y], buffer);
        }
    }
    if (check_my_path == false)
        create_env_var(index, path, value);
    return 0;
}