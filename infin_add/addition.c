/*
** EPITECH PROJECT, 2018
** DUPROS / RITOW / HURE
** File description:
** addition.c
*/

#include "./include/my.h"

char *my_str_to_nbr(char *str)
{
    char *dest = malloc(sizeof(char) * (my_strlen(str) + 1));
    int i = 0;
    int j = 0;

    for (; str[i] != '\0'; i++) {
        if (str[i] >= 48 && str[i] <= 57) {
            dest[j] = str[i];
            j++;
        }
    }
    dest[j] = '\0';
    return (dest);
}

int addition_detention(int res, char *base)
{
    if (res >= my_atoi(base))
        return (1);
    return (0);
}

int my_result(int res, int i, int j, char *base)
{
    int res_fin;

    if (res > my_atoi(base) && (i != 0 || j != 0))
        res_fin = res - my_atoi(base);
    else
        res_fin = res;
    return (res_fin);
}

char *infin_add(char *str_1, char *str_2, char *base)
{
    int i = my_strlen(str_1) - 1;
    int j = my_strlen(str_2) - 1;
    int nb_1;
    int nb_2;
    int res = 0;
    int res_fin = 0;
    int detention;
    char *buff = malloc(sizeof(char) * (i + j));
    int a = 0;

    for (res = 0; i >= 0 || j >= 0; i--, j--, a++) {
        detention = addition_detention(res, base);
        nb_1 = (str_1[i] - 48);
        nb_2 = (str_2[j] - 48);
        if (i < 0)
            nb_1 = 0;
        else if (j < 0)
            nb_2 = 0;
        res = nb_1 + nb_2 + detention;
        res_fin = my_result(res, i, j, base);
        if (res_fin < my_atoi(base))
            buff[a] = (res_fin + 48);
        else if (res_fin >= my_atoi(base)) {
            buff[a] = ((res_fin - my_atoi(base)) + 48);
            buff[a + 1] = 49;
        }
    }
    return (buff);
}

int display_res_addition(char **av)
{
    char *res = infin_add(my_str_to_nbr(av[1]), my_str_to_nbr(av[2]), my_str_to_nbr(av[3]));

    for (int i = my_strlen(res) - 1; i >= 0; i--)
        write(1, &res[i], 1);
    my_putchar('\n');
    free(res);
    return (0);
}
