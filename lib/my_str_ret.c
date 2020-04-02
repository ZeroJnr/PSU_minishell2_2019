/*
** EPITECH PROJECT, 2020
** compare str with int
** File description:
** my_str_ret
*/

#include "proto.h"

char *my_str_ret(char *str, int src)
{
    while (*str) {
        if (*str == src)
            return (str);
        else
            str++;
    }
    return (str);
}