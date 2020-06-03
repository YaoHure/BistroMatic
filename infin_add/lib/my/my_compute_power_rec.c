/*
** EPITECH PROJECT, 2018
** Leegan DUPROS
** File description:
** my_compute_power.c
*/

int my_compute_power_rec(int nb, int p)
{
    int nb_2 = nb;

    if (p == 0)
        return (1);
    else if (p < 0)
        return (0);
    nb_2 = nb_2 * my_compute_power_rec((nb), (p - 1));
    return (nb_2);
}
