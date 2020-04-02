/*
** EPITECH PROJECT, 2020
** iterative
** File description:
** factorial
*/

#include "proto.h"

char *my_strcpy(char *dest, char *str)
{
    dest = malloc(sizeof(char) * (my_lenght(str + 1)));
    if (!dest)
        return (NULL);
    dest = str;
    return (dest);
}