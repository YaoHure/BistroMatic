/*
** EPITECH PROJECT, 2018
** RITOW / DUPROS / HURE
** File description:
** evalexpr.c
*/

#include "./../include/my.h"

int all_calcul(char const *str)
{
    int res = first_number(str);

    for (int i = my_first_int_len(res); str[i];) {
        if (str_i_is_symb) {
            res = calcul_prio(res, i, str);
            i++;
            if (str[i] == '-' && str_is_symb)
                i++;
            for (; str_i_is_nbr; i++);
        } else {
            res = add_n_sub(res, i, str);
            for (i++; str_i_is_symb || str_i_is_nbr; i++) {
                if (str_i_is_symb && str[i + 1] == '-')
                    i++;
            }
        }
    }
    return (res);
}

int modulo_n_parentheses(char *new_calcul)
{
    int par = 0;
    int par_end = 0;

    error_parenthese(new_calcul);
    for (int i = 0; new_calcul[i]; i++) {
        if (new_calcul[i] == '(')
            par++;
        else if (new_calcul[i] == ')')
            par_end++;
        if ((new_calcul[i] == '/' || new_calcul[i] == '%') &&
            new_calcul[i + 1] == '0') {
                my_putstr(SYNTAX_ERROR_MSG);
                exit(84);
        }
    }
    return (par + par_end);
}

int counter_parentheses(char *new_calcul)
{
    int par = 0;

    for (int i = 0; new_calcul[i]; i++) {
        if (new_calcul[i] == '(')
            par++;
    }
    return (par);
}

char *eval_expr(char *str, char const *ops, char const *expr, unsigned int size)
{
    int par = 0;
    int res = 0;
    int par_end = 0;
    char *dest = malloc(sizeof(char) * my_strlen(expr));
    char *str_parenthese = malloc(sizeof(char) * my_strlen(expr));
    char *good_str = malloc(sizeof(char) * my_strlen(expr));
    char *new_calcul = malloc(sizeof(char) * my_strlen(expr));

    base_n_ops_verification(str, ops);
    verif_calcul(expr , str, ops);
    good_str = my_skip_space(change_symbole(expr, ops, OPERATOR));
    new_calcul = change_symbole(good_str, str, BASE);
    modulo_n_parentheses(new_calcul);

    if (counter_parentheses(new_calcul) > 0 &&
        ((modulo_n_parentheses(new_calcul) % 2) == 0)) {
        str_parenthese = my_str_without_parentheses(new_calcul);
        dest = eval_expr(BASE, OPERATOR, str_parenthese, size);
    } else if (counter_parentheses(new_calcul) > 0 &&
               ((modulo_n_parentheses(new_calcul) % 2) == 1)){
        my_putstr(SYNTAX_ERROR_MSG);
        exit(84);
    }
    if (counter_parentheses(new_calcul) == 0) {
        res = all_calcul(new_calcul);
        dest = change_res(my_itoa(res), BASE, str);
    }
    return (dest);
}
