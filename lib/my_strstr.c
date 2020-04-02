/*
** EPITECH PROJECT, 2020
** my_strstr
** File description:
** find occurence in a string
*/

#include "proto.h"

char *my_strstr(char *str, char *to_find)
{
    int i;
    int j;
    int n = 0;
    char *buffer = malloc(sizeof(char) * (my_lenght(str)));

    for (i = 0; str[i] != '\0'; i++) {
        for (j = 0; to_find[j] != '\0'; j++) {
            if (str[i] == to_find[j]) {
                buffer[n] = str[i];
                n++;
            }
        }
    }
    str = buffer;
    return (str);
}