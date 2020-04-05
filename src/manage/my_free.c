/*
** EPITECH PROJECT, 2020
** my free
** File description:
** free all variables used
*/

#include "proto_minishell.h"
#include <stdlib.h>

static void my_free_tab(char **buffer)
{
    for (int idx1 = 0; buffer[idx1]; idx1++) {
        free(buffer[idx1]);
    }
}

void my_free(index_t *index)
{
    my_free_tab(index->info.cmd);
    free(index->info.path);
    free(index->info.prompt);
    free(index->info.input);
}