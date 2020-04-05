/*
** EPITECH PROJECT, 2020
** checking_acces
** File description:
** check acces of the project
*/

#include "proto_minishell.h"
#include <stdlib.h>
#include <unistd.h>

void checking_acces(index_t *index)
{
    char **new_path = NULL;

    new_path = cut_my_cmd(PATH);
    for (int i = 0; new_path[i]; i++) {
        new_path[i] = my_strcat(new_path[i], "/");
        new_path[i] = my_strcat(new_path[i], CMD[0]);
    }
    for (int j = 0; new_path[j]; j++) {
        if (access(new_path[j], F_OK) == 0)
            PATH = new_path[j];
    }
}