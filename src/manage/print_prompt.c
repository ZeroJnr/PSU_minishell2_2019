/*
** EPITECH PROJECT, 2020
** print_promt
** File description:
** print user prompt
*/

#include "proto_minishell.h"
#include <stdlib.h>

void print_prompt(index_t *index)
{
    index->info.prompt = my_getenv(ENV, "PWD");
    if (index->info.prompt == NULL)
        index->info.prompt = "$>";
    else
        index->info.prompt = delete_slash(index, 3);
    my_putstr(index->info.prompt);
    my_putstr(" : ");
}