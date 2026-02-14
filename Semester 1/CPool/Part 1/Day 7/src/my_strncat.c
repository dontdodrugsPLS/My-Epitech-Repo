/*
** EPITECH PROJECT, 2025
** Task 03 - my_strncat
** File description:
** none.
*/

char *my_strncat(char *dest, char const *src, int n)
{
    char *dest_cpy = dest;
    int count = 0;

    while (*dest_cpy != '\0') {
        dest_cpy++;
    }
    while (*src != '\0' && count < n) {
        *dest_cpy = *src;
        dest_cpy++;
        src++;
        count++;
    }
    *dest_cpy = '\0';
    return dest;
}
