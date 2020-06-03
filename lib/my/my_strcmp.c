/*
** EPITECH PROJECT, 2018
** my_strcmp.c
** File description:
** Etienne Ritow / etienne.ritow@epitech.eu
*/

int my_strcmp(char const *s1, char const *s2)
{
    int i = 0;
    int j = 0;
    int resultat = 0;

    while (s1[i] != '\0' &&  s2[j] != '\0') {
        if (s1[i] != s2[j]) {
            resultat = (s1[i] - s2[j]);
            return (resultat);
        }
        i++;
        j++;
    }
    return (0);
}
