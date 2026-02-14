/*
** EPITECH PROJECT, 2025
** Task 08 - test_my_put_nbr
** File description:
** none.
*/

void my_putchar(char c);
int my_put_nbr(int nb);

int main(void)
{
    my_put_nbr(2147483647);
    my_put_nbr(5);
    my_put_nbr(0);
    my_put_nbr(-5);
    my_put_nbr(-2147483648);
    return (0);
}
