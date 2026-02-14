/*
** EPITECH PROJECT, 2025
** Task 01 - my_swap
** File description:
** none.
*/

void my_putchar(char c);

void my_swap(int *a, int *b)
{
    int temp = *a;

    *a = *b;
    *b = temp;
}
