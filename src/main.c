/*
** EPITECH PROJECT, 2020
** main function of minishell2
** File description:
** minishell2
*/

#include "proto_minishell.h"

int main(__attribute__((unused)) int argc, char *argv[], char **env)
{
    index_t index = {0};
    index.arg.av = argv;
    index.arg.ev = env;

    minishell_core(&index);
    my_free(&index);
    return 0;
}