/*
** EPITECH PROJECT, 2020
** my_strlen
** File description:
** length of a string
*/

#include "proto.h"

int my_lenght(char const *str)
{
    int i = 0;

    while (str[i] != '\0')
        i = i + 1;
    return i;
}

int my_lenght_sec(char const *str, int j)
{
    int i = j + 1;
    while (str[i] != '\n') {
        i++;
    }
    return (i - j);
}