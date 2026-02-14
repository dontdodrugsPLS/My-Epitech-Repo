/*
** EPITECH PROJECT, 2025
** Task 14 - my_str_islower - test
** File description:
** none.
*/

#include <criterion/criterion.h>

int my_str_islower(char const *str);

Test(my_str_islower, only_letter)
{
    cr_assert(my_str_islower("test") == 1);
    cr_assert(my_str_islower("TEST") == 0);
}
