/*
** EPITECH PROJECT, 2025
** Task 07 - my_find_prime_sup
** File description:
** none.
*/

#include <limits.h>

int my_is_prime(int nb);

int my_find_prime_sup(int nb)
{
    int found = 0;

    while (found == 0) {
        if (my_is_prime(nb)) {
            found = 1;
            break;
        } else {
            nb++;
        }
    }
    return (nb);
}
