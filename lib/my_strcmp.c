/*
** EPITECH PROJECT, 2020
** my_strcmp.c
** File description:
** my_strcmp
*/

#include "proto.h"

int my_strcmp(char const *str, char const *to_find)
{
    int len = my_lenght(to_find);

    if (len > my_lenght(str))
        return 0;
    for (int i = 0; i < len - 1; i++) {
        if (!(str[i] == to_find[i] && str[i + 1] == to_find[i + 1]))
            return 0;
    }
    return 1;
}