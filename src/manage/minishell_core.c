/*
** EPITECH PROJECT, 2020
** minishell
** File description:
** core of minishell project
*/

#include "proto_minishell.h"

void minishell_core(index_t *index)
{
    print_prompt(index);
    wait_cmd(index);
}