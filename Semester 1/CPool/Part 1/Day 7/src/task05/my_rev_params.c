/*
** EPITECH PROJECT, 2025
** Task 05 - my_rev_params
** File description:
** none.
*/

void my_putchar(char c);

void print_arg(char *arg)
{
    while (*arg != '\0') {
        my_putchar(*arg);
        arg++;
    }
    return;
}

int main(int argc, char *argv[])
{
    for (int i = argc - 1; i >= 0; i--) {
        print_arg(argv[i]);
        my_putchar('\n');
    }
    return (0);
}
