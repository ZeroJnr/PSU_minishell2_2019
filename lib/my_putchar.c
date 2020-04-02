/*
** EPITECH PROJECT, 2020
** my_putchar.c
** File description:
** my putchar
*/

#include "proto.h"

void my_putchar(char carac)
{
    write(1, &carac, 1);
}