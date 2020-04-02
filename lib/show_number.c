/*
** EPITECH PROJECT, 2020
** show_number
** File description:
** number show
*/

#include "proto.h"

char *show_number(int nb)
{
    char *str;
    int count = 1;
    int buffer = nb;

    for (; buffer >= 10; count++)
        buffer /= 10;
    buffer = nb;
    str = malloc(sizeof(char) * count + 1);
    if (!str)
        return (NULL);
    str[count] = '\0';
    count -= 1;
    while (count != -1) {
        str[count] = buffer % 10 + 48;
        buffer /= 10;
        count -= 1;
    }
    return (str);
}