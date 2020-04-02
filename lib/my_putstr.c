/*
** EPITECH PROJECT, 2020
** my_putstr
** File description:
** print
*/

#include "proto.h"

void my_putstr(char const *str)
{
    for (;(*str) != '\0'; str += 1)
        my_putchar((*str));
}