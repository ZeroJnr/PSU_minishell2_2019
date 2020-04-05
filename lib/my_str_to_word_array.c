/*
** EPITECH PROJECT, 2019
** my_str_to_word_array
** File description:
** str to word
*/

#include "proto.h"

int word_size(char const *str, int i)
{
    int wc = 0;

    for (; str[i] != ' ' && str[i] != '\n' && str[i] != '\0'; i++, wc++);
    return (wc);
}

char **str_to_word_array(char const *str)
{
    int cword = 0;
    char **words = malloc(sizeof(char *) * total_words(str));

    for (int i = 0; str[i] != '\0'; i++, cword++) {
        words[cword] = malloc(sizeof(char) * word_size(str, i) + 1);
        words[cword][word_size(str, i)] = '\0';
        for (int j = 0; str[i] != ' ' && str[i] != '\n' &&
        str[i] != '\0'; i++, j++) {
            words[cword][j] = str[i];
        }
        if (!str[i])
            return words;
    }
    return (words);
}