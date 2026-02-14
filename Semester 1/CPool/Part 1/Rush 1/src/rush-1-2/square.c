/*
** EPITECH PROJECT, 2025
** Rush 1 - 2
** File description:
** return a custom square.
*/

#include <unistd.h>

void my_putchar(char c);

static void print_top_square(int x, int y)
{
    for (int i = 0; i < x; i++) {
        if (i == 0 && (x > 1 && y > 1)) {
            my_putchar('/');
        }
        if (i == x - 1 && (x > 1 && y > 1)) {
            my_putchar('\\');
        }
        if ((i > 0 && i < x - 1) || (x == 1 || y == 1)){
            my_putchar('*');
        }
    }
}

static void print_middle_square(int x, int y)
{
    for (int i = 0; i < y - 2; i++) {
        my_putchar('\n');
        my_putchar('*');
        for (int j = 0; j < x - 2; j++) {
            my_putchar(' ');
        }
        if (x > 1) {
            my_putchar('*');
        }
    }
}

void print_bottom_square(int x, int y)
{
    for (int i = 0; i < x && y > 1; i++) {
        if (i == 0) {
            my_putchar('\n');
        }
        if (i == 0 && (x > 1 && y > 1)) {
            my_putchar('\\');
        }
        if (i == x - 1 && (x > 1 && y > 1)) {
            my_putchar('/');
        }
        if ((i > 0 && i < x - 1) || (x == 1 || y == 1)){
            my_putchar('*');
        }
    }
}

void rush(int x, int y)
{
    if (x <= 0 || y <= 0) {
        write(2, "Invalid size\n", 13);
        return;
    }
    print_top_square(x, y);
    print_middle_square(x, y);
    print_bottom_square(x, y);
    my_putchar('\n');
}
