/*
** EPITECH PROJECT, 2020
** proto_minishell2
** File description:
** minishell2
*/

#ifndef PROTO_SHELL
#define PROTO_SHELL

#include "struct.h"
#include "proto_lib.h"
#include "macro.h"

void exit_err(void);
char *my_getenv(char **env, char *path);
char *delete_whitespace(char const *buffer);
char **cut_my_cmd(char const *str);
void exec_cmd(index_t *index);
void minishell_core(index_t *index);
void my_free(index_t *index);
void checking_acces(index_t *index);
char *delete_slash(index_t *index, int nb);
void exit_cmd(char *buffer);
int my_setenv(char *path, char *value, index_t *index);
int my_unsetenv(char *buffer, index_t *index);
void wait_cmd(index_t *index);
void print_prompt(index_t *index);
int my_pipe(index_t *index);
int my_redirection(index_t *index);

#endif /* !PROTO_SHELL */