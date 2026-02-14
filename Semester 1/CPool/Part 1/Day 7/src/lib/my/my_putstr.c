/*
** EPITECH PROJECT, 2025
** Task 02 - my_putstr
** File description:
** none.
*/

void my_putchar(char c);

int my_putstr(char const *str)
{
    int iter = 0;

    while (str[iter] != '\0') {
        my_putchar(str[iter]);
        iter++;
    }
    return (0);
}
