/*
** EPITECH PROJECT, 2025
** Task 02 - my_compute_factorial_rec
** File description:
** none.
*/

#include <limits.h>

int my_compute_factorial_rec(int nb)
{
    long possible_int;

    if (nb < 0) {
        return (0);
    }
    if (nb == 0 || nb == 1) {
        return (1);
    }
    possible_int = (long)nb * my_compute_factorial_rec(nb - 1);
    if (possible_int < INT_MIN || possible_int > INT_MAX) {
        return (0);
    }
    return (nb * my_compute_factorial_rec(nb - 1));
}
