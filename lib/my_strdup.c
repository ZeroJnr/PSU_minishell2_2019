/*
** EPITECH PROJECT, 2019
** my_strdup
** File description:
** ...
*/

#include "proto.h"

char *my_strdup(char *src)
{
    int i = 0;
    char *dest = malloc(sizeof(char) * (my_lenght(src) + 1));

    if (dest == NULL)
        return (NULL);
    for (; src[i]; i++)
        dest[i] = src[i];
    dest[i] = '\0';
    return (dest);
}