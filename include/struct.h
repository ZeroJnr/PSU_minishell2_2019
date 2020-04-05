/*
** EPITECH PROJECT, 2020
** struct
** File description:
** struct_minishell1
*/

#ifndef STRUCT_SHELL
#define STRUCT_SHELL

typedef struct index index_t;
typedef struct info info_t;
typedef struct arg arg_t;

struct arg
{
    char **ev;
    char **av;
};

struct info
{
    char *path;
    char **cmd;
    char *input;
    char *prompt;
};

struct index
{
    arg_t arg;
    info_t info;
};

#endif /* !STRUCT_SHELL */
