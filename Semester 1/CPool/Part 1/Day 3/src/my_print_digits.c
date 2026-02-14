/*
** EPITECH PROJECT, 2025
** Task 03 - my_print_digits
** File description:
** none.
*/

void my_putchar(char c);

int my_print_digits(void)
{
    int zero = 48;
    int nine = 57;

    for (int i=zero; i <= nine; i++) {
        my_putchar(i);
    }
    return (0);
}
