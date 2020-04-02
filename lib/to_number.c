/*
** EPITECH PROJECT, 2020
** to_number
** File description:
** to_numbe
*/

#include "proto.h"

int to_number(char const *str)
{
    int i = 0;
    int buffer;
    int var = 0;
    int j = 0;

    for (; str[i] != '\0'; i++) {
        if (str[i] == '-')
            j++;
        if (str[i] >= '0' && str[i] <= '9') {
            buffer = str[i];
            var = var * 10 + (buffer - 48);
        }
        if (str[i] >= 'a' && str[i] <= 'z')
            return (84);
    }
    if (j % 2 != 0)
        var = (-var);
    return (var);
}
