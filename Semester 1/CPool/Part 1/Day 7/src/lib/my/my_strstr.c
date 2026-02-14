/*
** EPITECH PROJECT, 2025
** Task 05 - my_strstr
** File description:
** none.
*/

char *my_strstr(char *str, char const *to_find)
{
    char *s1;
    char *s2;

    if (*to_find == '\0') {
        return str;
    }
    while (*str != '\0') {
        s1 = str;
        s2 = (char *)to_find;
        while (*s1 == *s2 && *s2 != '\0') {
            s1++;
            s2++;
        }
        if (*s2 == '\0') {
            return str;
        }
        str++;
    }
    return 0;
}
