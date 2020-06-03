/*
** EPITECH PROJECT, 2018
** my_putchar.c
** File description:
** Etienne Ritow / etienne.ritow@epitech.eu
*/

#include "./../../include/my.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}
