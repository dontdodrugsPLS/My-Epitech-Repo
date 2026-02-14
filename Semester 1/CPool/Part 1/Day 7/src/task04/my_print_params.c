/*
** EPITECH PROJECT, 2025
** Task 04 - my_print_params
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
    for (int i = 0; i < argc; i++) {
        print_arg(argv[i]);
        my_putchar('\n');
    }
    return (0);
}
