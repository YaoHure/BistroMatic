/*
** EPITECH PROJECT, 2018
** my_strncpy.c
** File description:
** Etienne Ritow / etienne.ritow@epitech.eu
*/

char *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;
    int count = 0;

    while (src[i] != '\0') {
        while (count != n) {
            dest[i] = src[i];
            i++;
            count++;
        }
        dest[i] = '\0';
        return (dest);
    }
}
