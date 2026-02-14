/*
** EPITECH PROJECT, 2025
** Task 01 - my_compute_factorial_it
** File description:
** none.
*/

#include <limits.h>

int is_int(int result, int i)
{
    long possible_int = (long)result * i;

    if (possible_int < INT_MIN || possible_int > INT_MAX) {
        return (0);
    }
    return (1);
}

int my_compute_factorial_it(int nb)
{
    int result = 1;

    if (nb < 0) {
        return (0);
    }
    if (nb == 0) {
        return (1);
    }
    for (int i = 1; i <= nb; i++) {
        if (!is_int(result, i)) {
            return (0);
        }
        result *= i;
    }
    return (result);
}
