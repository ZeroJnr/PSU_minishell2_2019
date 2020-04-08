/*
** EPITECH PROJECT, 2020
** exit_cmd
** File description:
** exit commqd to kill shell
*/

#include "proto_minishell.h"
#include <stdlib.h>
#include <stdio.h>

void exit_cmd(char *buffer)
{
    if (my_strncmp(buffer, "exit", my_lenght("exit")) == 0) {
        printf("exit\n");
        exit(84);
    }
}