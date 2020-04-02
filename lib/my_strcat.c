/*
** EPITECH PROJECT, 2020
** my_strcat
** File description:
** my_strcat
*/

#include "proto.h"

char *my_strcat(char *str1, char *str2)
{
    char *str = NULL;
    int i = 0;

    if (str1 == NULL || str2 == NULL)
        return (NULL);
    i = my_lenght(str1) + my_lenght(str2) + 1;
    if ((str = malloc(sizeof(char) * i)) == NULL)
        return (NULL);
    i = 0;
    while (*str1)
        str[i++] = *str1++;
    while (*str2)
        str[i++] = *str2++;
    str[i] = '\0';
    return (str);
}