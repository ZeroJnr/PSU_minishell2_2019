/*
** EPITECH PROJECT, 2020
** proto_lib
** File description:
** all proto of libC Epitech
*/

#pragma once

#include <stdlib.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

int my_strncmp(char *s1, char *s2, int n);
int my_lenght(char const *);
void my_putchar(char);
char *my_strcpy(char *, char *);
char *show_number(int);
void show_string(char const *);
char *my_strstr(char *, char *);
int to_number(char const *);
void my_putstr(char const *);
char *my_strdup(char *src);
char *my_str_ret(char *str, int src);
char **str_to_word_array(char const *str);
int my_strncmp(char *s1, char *s2, int n);
int my_strcmp(char const *str, char const *to_find);
int my_getstat(char const *filepath);
char *my_strcat(char *str1, char *str2);
int my_strchr(char *str , char to_find);
int my_strchr_number(char *str , char to_find);
