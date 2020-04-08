/*
** EPITECH PROJECT, 2020
** my_getenv
** File description:
** get env
*/

#include "proto_minishell.h"
#include <fcntl.h>
#include <stdlib.h>

char *my_getenv(char **env, char *path)
{
    char *buffer = NULL;
    int counter = 0;

    for (int y = 0; env[y]; y++) {
        counter = my_strncmp(env[y], path, my_lenght(path));
        if (counter == 0)
            buffer = my_strdup(env[y] + 5);
    }
    return buffer;
}