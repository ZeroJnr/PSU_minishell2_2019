/*
** EPITECH PROJECT, 2020
** my_strncmp
** File description:
** my_strncmp
*/

#include "proto.h"

int my_strncmp(char *s1, char *s2, int n) {
    int i = 0;
    while (i < n - 1 && s1[i] == s2[i] && s2[i] && s1[i]) {
        i += 1;
    }
    return (s1[i] - s2[i]);
}