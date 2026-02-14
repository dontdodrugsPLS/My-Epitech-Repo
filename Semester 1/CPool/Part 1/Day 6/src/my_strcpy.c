/*
** EPITECH PROJECT, 2025
** Task 01 - my_strcpy
** File description:
** none.
*/

void my_putchar(char c);

char *my_strcpy(char *dest, char const *src)
{
    char *result = dest;

    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
    return result;
}
