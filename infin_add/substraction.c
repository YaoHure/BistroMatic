/*
** EPITECH PROJECT, 2018
** DUPROS / HURE / RITOW
** File description:
** substraction.c
*/

#include "./include/my.h"

char *infin_sub(char **av)
{
    char *str_1 = my_str_to_nbr(av[1]);
    char *str_2 = my_str_to_nbr(av[2]);
    int i = my_strlen(str_1) - 1;
    int j = my_strlen(str_2) - 1;
    int nb_1;
    int nb_2;
    int res = 0;
    int detention = 0;
    int calc_spc = 0;
    char *buff = malloc(sizeof(char) * (i + j));
    int a = 0;

    for (; i >= 0 || j >= 0; i--, j--) {
        nb_1 = (str_1[i] - 48);
        nb_2 = (str_2[j] - 48);
        res = 0;
        if (i < 0)
            nb_1 = 0;
        else if (j < 0)
            nb_2 = 0;
        if ((nb_1 < nb_2) && (i > 0 || j > 0))
            calc_spc = nb_1 + 10;
        else
            calc_spc = nb_1;
        res = calc_spc - (nb_2 - detention);
        detention = 0;
        if (calc_spc > 10 && (i > 2 || j > 2))
            detention = 1;
        buff[a] = (res + 48);
        a++;
    }
    return (buff);
}

int display_res_substraction(char **av)
{
    char *res = infin_sub(av);

    for (int i = my_strlen(res) - 1; i >= 0; i--)
        write(1, &res[i], 1);
    my_putchar('\n');
    free(res);
    return (0);
}
