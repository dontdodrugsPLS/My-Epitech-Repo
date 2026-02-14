/*
** EPITECH PROJECT, 2025
** Task 06 - my_print_comb2
** File description:
** none.
*/

void my_putchar(char c);

void print_four_digits(int first, int second, int third, int four)
{
    my_putchar(first + '0');
    my_putchar(second + '0');
    my_putchar(' ');
    my_putchar(third + '0');
    my_putchar(four + '0');
    if (!(first == 9 && second == 8 && third == 9 && four == 9)) {
        my_putchar(',');
        my_putchar(' ');
    }
}

int my_print_comb2(void)
{
    int max_nb_dgt_left = 98;
    int max_nb_dgt_right = max_nb_dgt_left + 1;
    int first_dgt;
    int second_dgt;
    int third_dgt;
    int four_dgt;

    for (int l_dgt = 0; l_dgt <= max_nb_dgt_left; l_dgt++) {
        for (int r_dgt = l_dgt + 1; r_dgt <= max_nb_dgt_right; r_dgt++) {
            first_dgt = l_dgt / 10;
            second_dgt = l_dgt % 10;
            third_dgt = r_dgt / 10;
            four_dgt = r_dgt % 10;
            print_four_digits(first_dgt, second_dgt, third_dgt, four_dgt);
        }
    }
    return (0);
}
