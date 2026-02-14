/*
** EPITECH PROJECT, 2025
** Task 05 - my_getnbr
** File description:
** none.
*/

#include <limits.h>

void my_putchar(char c);

int is_int(int num, int digit, int sign)
{
    long possible_int = (long)num * 10 + digit;

    possible_int *= sign;
    if (possible_int < INT_MIN || possible_int > INT_MAX) {
        return (0);
    }
    return (1);
}

int my_getnbr(char const *str)
{
    int sign = 1;
    int num = 0;
    int digit = 0;

    while (*str == '-' || *str == '+') {
        if (*str == '-') {
            sign = -sign;
        }
        str++;
    }
    while (*str >= '0' && *str <= '9' && *str != '\0') {
        digit = *str - 48;
        if (!is_int(num, digit, sign)) {
            return (0);
        }
        num = num * 10 + digit;
        str++;
    }
    return (num * sign);
}
