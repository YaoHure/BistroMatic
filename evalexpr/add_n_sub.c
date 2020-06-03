/*
** EPITECH PROJECT, 2018
** RITOW  / DUPROS / HURE
** File description:
** addition.c
*/

#include "./../include/my.h"

int add_n_sub(int res, int i, char const *str)
{
    int j = 0;
    int factor;
    int nb = 0;
    int stock = i;

    for (i++; str_i_is_nbr; i++, j++);
    factor = detention(j - 1);
    for (i = i - j; str_i_is_nbr; i++) {
        nb = nb + (str[i] - 48) * factor;
        factor = factor / 10;
    }
    for (;str_i_is_symb;) {
        nb = calcul_prio(nb, i, str);
        for (i++; str_i_is_nbr; i++);
    }
    if (str[stock] == '+')
        res = res + nb;
    else
        res = res - nb;
    return (res);
}

int first_number(char const *str)
{
    int res = 0;
    int i = 0;
    int j;
    int facteur;

    if (str[i] == '-')
        i++;
    for (j = 0; str_i_is_nbr; i++, j++);
    facteur = detention(j - 1);
    for (i = i - j; str_i_is_nbr; i++) {
        res = res + (str[i] - 48) * facteur;
        facteur = facteur / 10;
    }
    if (str[0] == '-')
        res = res * (-1);
    return (res);
}
