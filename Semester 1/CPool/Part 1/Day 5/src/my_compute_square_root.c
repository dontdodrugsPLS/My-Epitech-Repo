/*
** EPITECH PROJECT, 2025
** Task 05 - my_compute_square_root
** File description:
** none.
*/

#include <limits.h>

int my_compute_square_root(int nb)
{
    int start = 0;
    int mid = 0;
    int end = nb;

    while (start <= end) {
        mid = (start + end) / 2;
        if (mid * mid == nb) {
            return (mid);
        }
        if (mid * mid < nb) {
            start = mid + 1;
        }
        if (mid * mid > nb) {
            end = mid - 1;
        }
    }
    return (0);
}
