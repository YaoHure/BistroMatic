/*
** EPITECH PROJECT, 2018
** Leegan DUPROS
** File description:
** my.h
*/

#ifndef MY_H_
#define MY_H_

#include <unistd.h>
#include <stdlib.h>

void my_putchar(char c);
int my_isneg (int nb);
int my_put_nbr(int nb);
void my_swap(int *a, int *b);
int my_putstr(char const *str);
int my_strlen(char const *str);
int my_getnbr(char const *str);
void my_sort_int_array(int *tab, int size);
int my_compute_power_rec(int nb , int power);
int my_compute_square_root(int nb);
int my_is_prime(int nb);
int my_find_prime_sup(int nb);
char *my_strcpy(char *dest, char const *src);
char *my_strncpy(char *dest, char const *src, int n);
char *my_revstr(char *str);
char *my_strstr(char *str, char const *to_find);
int my_strcmp(char const *s1, char const *s2);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strupcase(char *str);
char *my_strlowcase(char *str);
char *my_strcapitalize(char *str);
int my_str_isalpha(char const *str);
int my_str_isnum(char const *str);
int my_str_islower(char const *str);
int my_str_isupper(char const *str);
int my_str_isprintable(char const *str);
int my_showstr(char const *str);
int my_showmem(char const *str, int size);
char *my_strcat(char *dest, char const *src);
char *my_strncat(char *dest, char const *src, int nb);
int my_atoi(char *str);
char *my_itoa(int nb);
int my_first_int_len(int res);

int addition_detention(int res, char *base);
int my_result(int res, int i, int j, char *base);
char *infin_add(char *str_1, char *str_2, char *base);
char *my_str_to_nbr(char *str);
int display_res_addition(char **av);
char *infin_sub(char **av);
int display_res_substraction(char **av);

#define USAGE_H "USAGE : ./infin_add [string] + [string] + [base]\n"           \

#endif
