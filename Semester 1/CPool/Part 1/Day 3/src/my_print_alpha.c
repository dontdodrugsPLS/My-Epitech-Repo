/*
** EPITECH PROJECT, 2025
** Task 01 - my_print_alpha
** File description:
** none.
*/

void my_putchar(char c);

int my_print_alpha(void)
{
    int a = 'a';
    int z = 'z';

    for (int i=a; i <= z; i++) {
        my_putchar(i);
    }
    return (0);
}
