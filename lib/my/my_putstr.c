/*
** EPITECH PROJECT, 2018
** my_putstr.c
** File description:
** Etienne Ritow / etienne.ritow@epitech.eu
*/

#include "./../../include/my.h"

int my_putstr(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        my_putchar(str[i]);
        i++;
    }
    return (0);
}
