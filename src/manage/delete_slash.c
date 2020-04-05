/*
** EPITECH PROJECT, 2020
** delete_shlash
** File description:
** delete number x of slash you  give in argument
*/

#include "proto_minishell.h"
#include <stdlib.h>
#include <stdio.h>

char *delete_slash(index_t *index, int nb)
{
    char *buffer = malloc(sizeof(char) * my_lenght(index->info.prompt) + 1);
    int slash = 0;
    int j = 0;

    for (int i = 0; index->info.prompt[i]; i++) {
        if (index->info.prompt[i] == '/')
            ++slash;
        if (slash >= nb) {
            buffer[j] = index->info.prompt[i];
            j++;
        }
    }
    return buffer;
}