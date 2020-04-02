/*
** EPITECH PROJECT, 2020
** my_calloc
** File description:
** my_calloc
*/

#include "proto.h"

char *my_calloc(size_t size)
{
    char *buffer = malloc(size);
    if (!buffer)
        return (NULL);
    for (size_t i = 0; i < size; i++)
        buffer[i] = '\0';
    return (buffer);
}