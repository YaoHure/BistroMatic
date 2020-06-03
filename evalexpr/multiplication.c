/*
** EPITECH PROJECT, 2018
** RITOW /  DUPROS / HURE
** File description:
** multiplication.c
*/

#include "./../include/my.h"

int detention(int i)
{
    int res = 10;

    if (i == 0)
        res = 1;
    for (int detention = 1; detention < i; detention++)
        res = res * 10;
    return (res);
}

int calcul_2(int i, char const *str)
{
    int nb = 0;
    int j;
    int factor;

    i++;
    if (str[i] == '-')
        i++;
    for (j = 0 ;str[i] > 47 && str[i] < 58; i++)
        j++;
    factor = detention(j - 1);
    for (i = i - j; str[i] > 47 && str[i] < 58; i++) {
        nb = nb + (str[i] - 48) * factor;
        factor = factor / 10;
    }
    if (str[i - j - 1] == '-')
        nb = nb * -1;
    return (nb);
}

int calcul_prio(int res, int i, char const *str)
{
    int nb = 0;

    if (str[i] == '*') {
        nb = calcul_2(i, str);
        res = res * nb;
    } else if (str[i] == '/') {
        nb = calcul_2(i, str);
        res = res / nb;
    } else if (str[i] == '%') {
        nb = calcul_2(i, str);
        res = res % nb;
    }
    return (res);
}
