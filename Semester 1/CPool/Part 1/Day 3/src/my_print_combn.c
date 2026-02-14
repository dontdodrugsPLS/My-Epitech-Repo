/*
** EPITECH PROJECT, 2025
** Task 09 - my_print_combn
** File description:
** I want to die.
*/

#include <stdio.h>

void my_putchar(char c);

static int get_length_digits(int n)
{
    int count = 0;

    if (n == 0) {
        return (1);
    }
    while (n > 0) {
        n /= 10;
        count++;
    }
    return (count);
}

static void dynamic_print_digits(int nb_of_digits, int curr_num)
{
    int length_of_digits = get_length_digits(curr_num);
    int power = 1;
    int digit;

    for (int i = length_of_digits; i < nb_of_digits; i++) {
        my_putchar('0');
    }
    while (curr_num / power >= 10) {
        power *= 10;
    }
    while (power > 0) {
        digit = curr_num / power;
        my_putchar(digit + '0');
        curr_num %= power;
        power /= 10;
    }
}

static void calculate_next(int *next, int position, int high, int pivot)
{
    *next = high * 10 + pivot;
    while (position > 0) {
        ++pivot;
        *next = *next * 10 + pivot;
        --position;
    }
}

static void next_comb(int nb_of_digits, int curr_num, int *result, int *found)
{
    int position = 0;
    int last_digit = 0;
    int high = 0;
    int pivot = 0;
    int next = 0;

    while (position < nb_of_digits) {
        last_digit = curr_num % 10;
        if (last_digit < 9 - position) {
            high = curr_num / 10;
            pivot = last_digit + 1;
            calculate_next(&next, position, high, pivot);
            *result = next;
            *found = 1;
            break;
        }
        curr_num /= 10;
        ++position;
    }
}

static void loop_print(int n, int curr_num)
{
    int next = 0;
    int found = 0;

    while (1) {
        found = 0;
        dynamic_print_digits(n, curr_num);
        next_comb(n, curr_num, &next, &found);
        if (!found) {
            break;
        }
        my_putchar(',');
        my_putchar(' ');
        curr_num = next;
    }
}

int my_print_combn(int n)
{
    int curr_num = 0;

    if (n <= 0 || n >= 10) {
        return (0);
    }
    for (int i = 0; i < n; i++) {
        curr_num = curr_num * 10 + i;
    }
    loop_print(n, curr_num);
    return (0);
}
