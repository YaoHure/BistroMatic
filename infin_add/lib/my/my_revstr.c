/*
** EPITECH PROJECT, 2018
** Leegan DUPROS
** File description:
** my_revstr.c
*/

char *my_revstr(char *str)
{
    int j;
    char a;

    for (j = 0; str[j] != '\0'; j++);
    for (int i = 0; i < j; i++) {
        a = str[i];
        str[i] = str[j-1];
        str[j-1] = a;
        j--;
    }
    return (str);
}
