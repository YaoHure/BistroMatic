/*
** EPITECH PROJECT, 2018
** HURE / RITOW / DUPROS
** File description:
** verif_str.c
*/

#include "./../include/my.h"

int verif_str(char *str)
{
    int i = 0;
    int same = 0;

    for (i = 0; str[i]; i++) {
        if (str_i_is_nbr || str_i_is_symb || str[i] == '+' || str[i] == '-' ||
            str[i] == '(' || str[i] == ')')
            same++;
    }
    if (same == (my_strlen(str) - 1))
        return (0);
    else
        return (1);
}
