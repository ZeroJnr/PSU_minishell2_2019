/*
** EPITECH PROJECT, 2020
** my_chr
** File description:
** my_chr
*/

#include "proto.h"

bool my_chr(char *str , char to_find)
{
    int idx = 0;

    for (idx = 0; str[idx]; idx++)
        if (str[idx] == to_find)
            return true;
    return false;
}
