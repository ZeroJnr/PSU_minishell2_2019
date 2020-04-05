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
    if(buffer[0] == 'e' && buffer[1] == 'x' && buffer[2] == 'i'\
    && buffer[3] == 't' && buffer[4] == 't')
        printf("ok\n");
}