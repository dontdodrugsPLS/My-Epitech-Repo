/*
** EPITECH PROJECT, 2025
** Task 12 - my_str_isalpha
** File description:
** none.
*/

int my_str_isalpha(char const *str)
{
    while (*str != '\0') {
        if (!((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z'))) {
            return (0);
        }
        str++;
    }
    return (1);
}
