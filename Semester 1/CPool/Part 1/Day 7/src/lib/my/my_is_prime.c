/*
** EPITECH PROJECT, 2025
** Task 06 - my_is_prime
** File description:
** none.
*/

#include <limits.h>

int my_is_prime(int nb)
{
    int i = 2;

    if (nb <= 1) {
        return (0);
    }
    while (i * i <= nb) {
        if (nb % i == 0) {
            return (0);
        }
        i++;
    }
    return (1);
}
