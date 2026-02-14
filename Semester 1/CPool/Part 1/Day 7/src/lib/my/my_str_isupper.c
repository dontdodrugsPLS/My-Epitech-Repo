/*
** EPITECH PROJECT, 2025
** Task 15 - my_str_isupper
** File description:
** none.
*/

int my_str_isupper(char const *str)
{
    while (*str != '\0') {
        if (!(*str >= 'A' && *str <= 'Z')) {
            return (0);
        }
        str++;
    }
    return (1);
}
