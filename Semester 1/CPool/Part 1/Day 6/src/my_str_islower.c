/*
** EPITECH PROJECT, 2025
** Task 14 - my_str_islower
** File description:
** none.
*/

int my_str_islower(char const *str)
{
    while (*str != '\0') {
        if (!(*str >= 'a' && *str <= 'z')) {
            return (0);
        }
        str++;
    }
    return (1);
}
