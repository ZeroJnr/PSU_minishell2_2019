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

void wait_cmd(index_t *index)
{
    size_t strm = 0;
    ssize_t rd = 0;

    while ((rd = getline(&INPUT, &strm, stdin)) != -1) {
        exit_cmd(INPUT);
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