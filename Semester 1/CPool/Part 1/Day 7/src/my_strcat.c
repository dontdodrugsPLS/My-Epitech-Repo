/*
** EPITECH PROJECT, 2025
** Task 02 - my_strcat
** File description:
** none.
*/

char *my_strcat(char *dest, char const *src)
{
    char *dest_cpy = dest;

    while (*dest_cpy != '\0') {
        dest_cpy++;
    }
    while (*src != '\0') {
        *dest_cpy = *src;
        dest_cpy++;
        src++;
    }
    *dest_cpy = '\0';
    return dest;
}
