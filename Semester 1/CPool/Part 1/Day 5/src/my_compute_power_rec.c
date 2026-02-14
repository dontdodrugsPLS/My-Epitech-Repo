/*
** EPITECH PROJECT, 2025
** Task 04 - my_compute_power_rec
** File description:
** none.
*/

#include <limits.h>

int handle_exception2(int nb, int p)
{
    if (p < 0) {
        return (0);
    }
    if (p == 0) {
        return (1);
    }
    if (nb == 0) {
        return (0);
    }
    if (nb == 1) {
        return (1);
    }
    return (-1);
}

int my_compute_power_rec(int nb, int p)
{
    long possible_int;
    int result_exception = handle_exception2(nb, p);

    if (result_exception != -1) {
        return (result_exception);
    }
    possible_int = (long)nb * p;
    if (possible_int < INT_MIN || possible_int > INT_MAX) {
        return (0);
    }
    return (nb * my_compute_power_rec(nb, p - 1));
}
