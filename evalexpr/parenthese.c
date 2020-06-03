/*
** EPITECH PROJECT, 2018
** CPool_bistro-matic_2018
** File description:
** HURE / RITOW / DUPROS
*/

#include "./../include/my.h"

char *my_in_parenthese(char const *str)
{
    char *dest = malloc(sizeof(char) * my_strlen(str));
    char *str_par = malloc(sizeof(char) * my_strlen(str));
    int par = 0;
    int j = 0;
    int k = 0;

    for (par = 0; str[par] != '('; par++);
    par++;
    for (j = par; str[j] != ')'; j++, k++)
        str_par[k] = str[j];
    str_par[j + 1] = '\0';
    dest = my_itoa(all_calcul(str_par));
    return (dest);
}

char *my_str_without_parentheses(char const *str)
{
    char *dest = malloc(sizeof(char) * my_strlen(str));
    char *in_parenthese = my_in_parenthese(str);
    int par = 0;
    int in_par = 0;
    int i = 0;

    for (par = 0; str[par] != '('; par++, i++)
        dest[i] = str[par];
    for (int nb = 0; in_parenthese[nb] != '\0'; nb++, i++)
        dest[i] = in_parenthese[nb];
    for (in_par = par; str[in_par] != ')'; in_par++);
    for (int a = in_par + 1; str[a] != '\0'; a++, i++)
        dest[i] = str[a];
    dest[i + 1] = '\0';
    return (dest);
}
