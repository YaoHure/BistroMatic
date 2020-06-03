/*
** EPITECH PROJECT, 2018
** Leegan DUPROS
** File description:
** my_skip_space.c
*/

#include "./../../include/my.h"

char *my_skip_space(char *str)
{
    char *dest = malloc(sizeof(char *) + my_strlen(str));
    int j = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            dest[j] = str[i];
            j++;
        }
    }
    dest[j + 1] = '\0';
    return (dest);
}
