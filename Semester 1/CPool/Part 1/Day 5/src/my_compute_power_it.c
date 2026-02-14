/*
** EPITECH PROJECT, 2025
** Task 03 - my_compute_power_it
** File description:
** none.
*/

#include <limits.h>

int is_int2(int result, int nb)
{
    long possible_int = (long)result * nb;

    if (possible_int < INT_MIN || possible_int > INT_MAX) {
        return (0);
    }
    return (1);
}

int handle_exception(int nb, int p)
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

int my_compute_power_it(int nb, int p)
{
    int result = nb;
    int result_exception = handle_exception(nb, p);

    if (result_exception != -1) {
        return (result_exception);
    }
    for (int i = 1; i < p; i++) {
        if (!is_int2(result, nb)) {
            return (0);
        }
        result *= nb;
    }
    return (result);
}
