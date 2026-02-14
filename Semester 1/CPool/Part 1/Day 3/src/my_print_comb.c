/*
** EPITECH PROJECT, 2025
** Task 05 - my_print_comb
** File description:
** none.
*/

void my_putchar(char c);

void print_three_digits(int first_dgt, int second_dgt, int third_dgt)
{
    my_putchar(first_dgt + '0');
    my_putchar(second_dgt + '0');
    my_putchar(third_dgt + '0');
    if (!(first_dgt == 7 && second_dgt == 8 && third_dgt == 9)) {
        my_putchar(',');
        my_putchar(' ');
    }
}

int my_print_comb(void)
{
    int nb_of_iter = 0;
    int max_nb_of_iter = 999;
    int first_dgt;
    int second_dgt;
    int third_dgt;

    while (nb_of_iter <= max_nb_of_iter) {
        first_dgt = nb_of_iter / 100;
        second_dgt = (nb_of_iter / 10) % 10;
        third_dgt = nb_of_iter % 10;
        if ((first_dgt < second_dgt && second_dgt < third_dgt)) {
            print_three_digits(first_dgt, second_dgt, third_dgt);
        }
        nb_of_iter += 1;
    }
    return (0);
}
