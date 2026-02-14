/*
** EPITECH PROJECT, 2025
** Task 18 - my_putnbr_base
** File description:
** none.
*/

void my_putchar(char c);

int get_strlen(char const *str)
{
    int count = 0;

    while (str[count] != '\0') {
        count++;
    }
    return (count);
}

int my_putnbr_base(int nbr, char const *base)
{
    int base_len = get_strlen(base);

    if (nbr < 0) {
        my_putchar('-');
        nbr = -nbr;
    }
    if (nbr >= base_len) {
        my_putnbr_base((nbr / base_len), base);
    }
    my_putchar(base[nbr % base_len]);
}
