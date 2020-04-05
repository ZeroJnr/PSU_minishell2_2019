/*
** EPITECH PROJECT, 2020
** delele_whitespace
** File description:
** delete all whitespace
*/

#include "proto_minishell.h"
#include <stdlib.h>

char *delete_whitespace(char const *buffer)
{
    char *result = malloc(sizeof(char) * my_lenght(buffer) + 1);
    int i = 0;
    int n = 0;

    for (i = 0, n = 0; buffer[i]; i++, n++) {
        if (buffer[i] == ' ' && buffer[i + 1] == ' ')
            i++;
        result[n] = buffer[i];
    }
    result[n] = '\0';
    for (i = 0; result[i]; i++) {
        if (result[i] == ' ' && result[i + 1] == ' ')
            return (delete_whitespace(result));
    }
    return (result);
}