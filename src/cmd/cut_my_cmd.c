/*
** EPITECH PROJECT, 2020
** str_to_wordtab
** File description:
** str_to_wordtab
*/

#include "proto_minishell.h"
#include <stdlib.h>

static int total_words_new(char const *str)
{
    int tw = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' || str[i] == '\n' || str[i] != '\0') {
            tw++;
        }
    }
    return (tw);
}

int new_word_size(char const *str, int i)
{
    int wc = 0;

    for (; str[i] != ':' && str[i] != '\n' && str[i] != '\0'; i++, wc++);
    return (wc);
}

char **cut_my_cmd(char const *str)
{
    int cword = 0;
    char **words = malloc(sizeof(char *) * total_words_new(str));

    for (int i = 0; str[i] != '\0'; i++, cword++) {
        words[cword] = malloc(sizeof(char) * new_word_size(str, i) + 1);
        words[cword][new_word_size(str, i)] = '\0';
        for (int j = 0; str[i] != ':' && str[i] != '\n' &&
        str[i] != '\0'; i++, j++) {
            words[cword][j] = str[i];
        }
        if (!str[i])
            return words;
    }
    return (words);
}