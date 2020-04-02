/*
** EPITECH PROJECT, 2020
** total_words
** File description:
** total_words
*/

#include "proto.h"

int total_words(char const *str)
{
    int tw = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' || str[i] == '\n' || str[i] != '\0') {
            tw++;
        }
    }
    return (tw);
}