/*
** EPITECH PROJECT, 2020
** exec_cmd.c
** File description:
** exec cmd of shell
*/

#include "proto_minishell.h"
#include <signal.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdbool.h>
#include <unistd.h>
#include <stdlib.h>

static bool my_forking(pid_t pid)
{
    int wstatus = 0;

    if ((pid = fork()) == -1)
        return 84;
    else if (pid > 0) {
        waitpid(pid, &wstatus, 0);
        kill(pid, SIGTERM);
    }
    else
        return true;
    return false;
}

void exec_cmd(index_t *index)
{
    pid_t pid = getpid();
    char *list_with_any_spaces = delete_whitespace(INPUT);
    CMD = str_to_word_array(list_with_any_spaces);

    if (my_forking(pid) == true) {
        checking_acces(index);
        if (execve(PATH, CMD, ENV) == -1) {
            my_putstr(CMD[0]);
            my_putstr(": Command not found\n");
        }
        exit(EXIT_FAILURE);
    }
}