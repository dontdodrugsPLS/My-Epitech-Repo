/*
** EPITECH PROJECT, 2025
** Task 02 - my_strncpy
** File description:
** none.
*/

void my_putchar(char c);

char *my_strncpy(char *dest, char const *src, int n)
{
    char *result = dest;
    int count = 0;

    while (*src != '\0' && count < n) {
        *dest = *src;
        dest++;
        src++;
        count++;
    }
    while (count < n) {
        *dest = '\0';
        dest++;
        count++;
    }
    return result;
}
