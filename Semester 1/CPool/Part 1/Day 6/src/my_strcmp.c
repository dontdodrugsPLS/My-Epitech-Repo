/*
** EPITECH PROJECT, 2025
** Task 06 - my_strcmp
** File description:
** none.
*/

int my_strcmp(char const *s1, char const *s2)
{
    while (*s1 && *s2 && *s1 == *s2) {
        s1++;
        s2++;
    }
    return (*s1 - *s2);
}
