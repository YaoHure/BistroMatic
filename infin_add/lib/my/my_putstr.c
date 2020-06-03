/*
** EPITECH PROJECT, 2018
** Leegan DUPROS
** File description:
** my_putstr.c
*/

#include "./../../include/my.h"

int my_putstr(char const *str)
{
    for (int i; str[i] != '\0'; i++)
        my_putchar(str[i]);
    return (0);
}
