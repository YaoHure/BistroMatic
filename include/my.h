/*
** EPITECH PROJECT, 2018
** my.h
** File description:
** Etienne Ritow / etienne.ritow@epitech.eu
*/

#ifndef MY_H_
#define MY_H_

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "bistromatic.h"

void my_putchar(char c);
void my_put_nbr(int nb);
void my_swap(int *a, int *b);
int my_putstr(char const *str);
int my_strlen(char const *str);
int my_getnbr(char const *str);
char *my_strcpy(char *dest, char const *src);
char *my_strncpy(char *dest, char const *src, int n);
int my_strcmp(char const *s1, char const *s2);
int my_strncmp(char const *s1, char const *s2, int n);
int my_str_isalpha(char const *str);
char *my_strcat(char *dest, char const *src);
char *my_strncat(char *dest, char const *src, int nb);
int my_atoi(char *str);
char *my_itoa(int nb);
char *my_skip_space(char *str);
int my_first_int_len(int res);
char *my_revstr(char *str);
char *my_in_parenthese(char const *str);
char *my_str_without_parentheses(char const *str);

int error_parenthese(char const *str);
int verif_calcul(char const *str, char *base, char const *ops);
int base_n_ops_verification(char *base, char const *ops);
char *change_res(char *res, char const *str, char *base);

int verif_str(char *str);
int add_n_sub(int res, int i, char const *str);
int first_number(char const *str);
int all_calcul(char const *str);
char *eval_expr(char *, char const *, char const *, unsigned int);
int detention(int i);
int calcul_2(int i, char const *str);
int calcul_prio(int res, int i, char const *str);
char *change_symbole(char const *str, char const *truc, char *base);

#define str_i_is_nbr (str[i] > 47 && str[i] < 58)                       \

#define str_i_is_symb (str[i] == '*' || str[i] == '/' || str[i] == '%') \

#define str_is_symb (str[i - 1] == 42 || str[i - 1] == 47 || str[i - 1] == 37) \

#define OPERATOR "()+-*/%" \

#define BASE "0123456789"

#endif
