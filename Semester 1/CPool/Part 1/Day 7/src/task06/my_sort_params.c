/*
** EPITECH PROJECT, 2025
** Task 06 - my_sort_params
** File description:
** none.
*/

void my_putchar(char c);
int my_strcmp(char const *s1, char const *s2);

void print_arg(char *arg)
{
    while (*arg != '\0') {
        my_putchar(*arg);
        arg++;
    }
    return;
}

void swap_char(char **c1, char **c2)
{
    char *temp = *c1;

    *c1 = *c2;
    *c2 = temp;
}

char **sort_arg(int argc, char *argv[])
{
    int count = 0;

    for (int i = 0; i < argc - 1; i++) {
        if (my_strcmp(argv[i], argv[i + 1]) > 0) {
            swap_char(&argv[i], &argv[i + 1]);
            count++;
        }
    }
    if (count == 0) {
        return argv;
    }
    return (sort_arg(argc, argv));
}

int main(int argc, char *argv[])
{
    sort_arg(argc, argv);
    for (int i = 0; i < argc; i++) {
        print_arg(argv[i]);
        my_putchar('\n');
    }
    return (0);
}
