/*
** EPITECH PROJECT, 2018
** HURE / RITOW / DUPROS
** File description:
** error.c
*/

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "../include/my.h"

int error_parenthese(char const *str)
{
    for (int i = 0; str[i]; i++) {
        if (str[i] == '(' && (str[i - 1] >= 48 && str[i - 1] <= 57)) {
            my_putstr(SYNTAX_ERROR_MSG);
            exit(84);
        }
    }
    return (0);
}

int verif_calcul(char const *str, char *base, char const *ops)
{
    int i = 0;
    int k = 0;
    char *dest = malloc(sizeof(char) * (my_strlen(base) + my_strlen(ops)));

    for (i = 0; base[i] != '\0'; i++, k++)
        dest[k] = base[i];
    for (int j = 0; ops[j] != '\0'; j++, k++)
        dest[k] = ops[j];
    dest[k + 1] = '\0';
    for (i = 0; str[i] != '\0'; i++) {
        for (k = 0; str[i] != dest[k]; k++) {
            if (k > (my_strlen(dest)) - 1) {
                my_putstr(SYNTAX_ERROR_MSG);
                exit(84);
            }
        }
    }
    return (0);
}

int base_n_ops_verification(char *base, char const *ops)
{
    for (int i = 0; base[i]; i++) {
        for (int j = 0; ops[j]; j++) {
            if (base[i] == ops[j]) {
                my_putstr(SYNTAX_ERROR_MSG);
                exit(84);
            }
        }
    }
    return (0);
}
