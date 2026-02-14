/*
** EPITECH PROJECT, 2025
** Task 16 - my_str_isprintable
** File description:
** none.
*/

int my_str_isprintable(char const *str)
{
    while (*str != '\0') {
        if (!(*str >= 32 && *str <= 126)) {
            return (0);
        }
        str++;
    }
    return (1);
}
