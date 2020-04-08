/*
** EPITECH PROJECT, 2020
** my_strcat
** File description:
** function libs strcat concat two strings
*/

#include "proto.h"

char *my_strcat(char *str1, char *str2)
{
    char *dest = malloc(sizeof(char) * (my_lenght(str1) + my_lenght(str2) + 1));
    int i = 0;
    
    for (i = 0; str1[i]; i++)
        dest[i] = str1[i];
    for (int j = 0; str2[j]; j++, i++)
        dest[i] = str2[j];
    dest[i] = '\0';
    return dest;
}
