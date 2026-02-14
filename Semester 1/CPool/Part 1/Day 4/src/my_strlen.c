/*
** EPITECH PROJECT, 2025
** Task 03 - my_strlen
** File description:
** none.
*/

int my_strlen(char const *str)
{
    int iter = 0;

    while (str[iter] != '\0') {
        iter++;
    }
    return (iter);
}
