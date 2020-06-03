/*
** EPITECH PROJECT, 2018
** my_str_isalpha.c
** File description:
** Etienne Ritow / etienne.ritow@epitech.eu
*/

int is_alpha(char **av)
{
    int i = 2;

    while (av[i]) {
        if (av[i][0] >= 'a' && av[i][0] <= 'z')
            return (0);
        else if (av[i][0] >= 'A' && av[i][0] <= 'Z')
            return (0);
        else
            return (1);
        i += 1;
    }
}

