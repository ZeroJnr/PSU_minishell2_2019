/*
** EPITECH PROJECT, 2020
** struct
** File description:
** struct_minishell1
*/

#ifndef STRUCT_SHELL
#define STRUCT_SHELL
#include <stdbool.h>

typedef struct index index_t;
typedef struct info info_t;
typedef struct arg arg_t;
typedef struct my_bool my_bool_t;

struct arg
{
    char **ev;
    char **av;
};

struct my_bool
{
    bool built;
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
    my_bool_t my_bool;
};

#endif /* !STRUCT_SHELL */
