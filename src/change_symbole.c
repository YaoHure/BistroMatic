/*
** EPITECH PROJECT, 2018
** HURE / RITOW / DUPROS
** File description:
** change_symbole.c
*/

#include "./../include/my.h"

char *change_symbole(char const *str, char const *truc, char *base)
{
    int i = 0;
    int j = 0;
    char *dest = malloc(sizeof(char) * my_strlen(str));

    for (i = 0; str[i] != '\0'; i++) {
        for (j = 0; truc[j] != str[i] && j <= my_strlen(base); j++);
        if (j <= my_strlen(base))
            dest[i] = base[j];
        else
            dest[i] = str[i];
    }
    dest[i + 1] = '\0';
    return (dest);
}

char *change_res(char *res, char const *str, char *base)
{
    int i = 0;
    int j = 0;
    char *dest = malloc(sizeof(char) * my_strlen(res));

    for (i = 0; res[i]; i++) {
        for (j = 0; str[j] != res[i] && j <= my_strlen(base); j++);
        if (j <= my_strlen(base))
            dest[i] = base[j];
        else
            dest[i] = str[i];
    }
    return (dest);
}
