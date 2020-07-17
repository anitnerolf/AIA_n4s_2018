/*
** EPITECH PROJECT, 2019
** ghj
** File description:
** jk
*/

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

int     check_column(char *str, char c)
{
    int i = 0;

    for (i = 0; str[i] != '\0' && str[i] != c; i++);
    return (i);
}

int     count_words(char *str, char c)
{
    int z = 0;
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] == c && str[i + 1] != '\0')
            z++;
        i++;
    }
    return (z + 1);
}
