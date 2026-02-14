/*
** EPITECH PROJECT, 2025
** Task 02 - my_print_revalpha
** File description:
** none.
*/

void my_putchar(char c);

int my_print_revalpha(void)
{
    int a = 'a';
    int z = 'z';

    for (int i=z; i >= a; i--) {
        my_putchar(i);
    }
    return (0);
}
