/*
** EPITECH PROJECT, 2018
** Leegan DUPROS
** File description:
** my_strncpy.c
*/

char *my_strncpy(char *dest, char const *src, int n)
{
    int size = 0;

    if (!src)
        return ((char *)0);
    for (; src[size]; size++);
    for (int i = 0; i < n; i++) {
        dest[i] = src[i];
        if (n > size && i == n)
            dest[i] = '\0';
    }
    return (dest);
}
