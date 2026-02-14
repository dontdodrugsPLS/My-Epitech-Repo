/*
** EPITECH PROJECT, 2025
** Task 13 - my_str_isnum
** File description:
** none.
*/

int my_str_isnum(char const *str)
{
    while (*str != '\0') {
        if (!(*str >= '0' && *str <= '9')) {
            return (0);
        }
        str++;
    }
    return (1);
}
