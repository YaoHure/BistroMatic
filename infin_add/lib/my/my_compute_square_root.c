/*
** EPITECH PROJECT, 2018
** Leegan DUPROS
** File description:
** my_compute_square_root.c
*/

int my_compute_square_root(int nb)
{
    int i = 1;

    while (i < 46340) {
        if (i * i == nb)
            return (i);
        i++;
    }
    return (0);
}
