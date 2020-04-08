/*
** EPITECH PROJECT, 2020
** minishell
** File description:
** core of minishell project
*/

#include "proto_minishell.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

static void print_prompt(index_t *index)
{
    index->info.prompt = my_getenv(ENV, "PWD");
    if (index->info.prompt == NULL)
        index->info.prompt = "$>";
    else
        index->info.prompt = delete_slash(index, 3);
    my_putstr(index->info.prompt);
    my_putstr(" : ");
}

static void wait_cmd(index_t *index)
{
    size_t strm = 0;
    ssize_t rd = 0;

    while ((rd = getline(&INPUT, &strm, stdin)) != -1) {
        PATH = my_getenv(ENV, "PATH");
        if (PATH == NULL)
            PATH = "/bin:/sbin:/usr/bin:/usr/sbin";
        exec_cmd(index);
        print_prompt(index);
    }
    if (rd < 0) {
        my_putstr("Error with your input\n");
        exit(84);
    }
}

void minishell_core(index_t *index)
{
    print_prompt(index);
    wait_cmd(index);
}