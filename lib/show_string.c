/*
** EPITECH PROJECT, 2020
** show_string
** File description:
** show_string
*/

#include "proto.h"

void show_string(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        my_putchar(str[i]);
        my_putchar('\n');
    }
}