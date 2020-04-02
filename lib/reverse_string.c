/*
** EPITECH PROJECT, 2020
** reverse
** File description:
** string
*/

#include "proto.h"

void reverse_string(char *str)
{
    int i = 0;

    while (str[i] != '\0')
        i++;
    if (str[i] == '\0')
        while (i != my_lenght(str)) {
            i--;
            my_putchar(str[i]);
        }
    my_putchar('\n');
}