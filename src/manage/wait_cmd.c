/*
** EPITECH PROJECT, 2020
** wait cmd
** File description:
** function who wait cmd at the user
*/

#include "proto_minishell.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

static void builtins(index_t *index)
{
    exit_cmd(INPUT, index);
    unsetenv_cmd(INPUT, index);
    setenv_cmd(INPUT, index);
}

void wait_cmd(index_t *index)
{
    size_t strm = 0;
    ssize_t rd = 0;

    while ((rd = getline(&INPUT, &strm, stdin)) != -1) {
        builtins(index);
        PATH = my_getenv(ENV, "PATH");
        if (PATH == NULL)
            PATH = "/bin:/sbin:/usr/bin:/usr/sbin";
        exec_cmd(index);
        index->my_bool.built = false;
        print_prompt(index);
    }
    if (rd < 0) {
        my_putstr("Error with your input\n");
        exit(84);
    }
}