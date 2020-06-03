/*
** EPITECH PROJECT, 2018
** Leegan DUPROS
** File description:
** my_strcpy.c
*/

char *my_strcpy(char *dest, char const *src)
{
    int size = 0;

    if (!src)
        return ((char *)0);
    for (; src[size]; size++);
    for (int i = 0; i <= size; i++)
        dest[i] = src[i];
    return (dest);
}
