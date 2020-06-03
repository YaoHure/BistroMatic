/*
** EPITECH PROJECT, 2018
** DUPROS / RITOW / HURE
** File description:
** infin_add.c
*/

#include "./include/my.h"

int sum_arg(char *str)
{
    int res = 0;
    int inter = 0;
    int nb = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        res = 0;
        nb = (str[i] - 48);
        res = inter + nb;
        inter = res;
    }
    return (res);
}

int priority_sign(char **av)
{
    int len_1 = my_strlen(my_str_to_nbr(av[1]));
    int len_2 = my_strlen(my_str_to_nbr(av[2]));

    if ((av[1][0] == 45) && (len_1 > len_2)) {
        my_putchar(45);
    }
    else if ((av[2][0] == 45) && (len_2 > len_1)) {
        my_putchar(45);
    }
    display_res_substraction(av);
    return (0);
}

int parameters(char **av)
{
    if (av[1][0] != 45 && av[2][0] != 45)
        display_res_addition(av);
    if (av[1][0] == 45 && av[2][0] == 45) {
        my_putchar(45);
        display_res_addition(av);
    }
    if ((av[1][0] == 45 && av[2][0] != 45) ||
    (av[1][0] != 45 && av[2][0] == 45)) {
        priority_sign(av);
    }
    return (0);
}

int main(int ac, char **av)
{
    if (ac == 4) {
        parameters(av);
    } else if (ac != 4) {
        write(2, USAGE_H, my_strlen(USAGE_H));
    }
    return (0);
}
