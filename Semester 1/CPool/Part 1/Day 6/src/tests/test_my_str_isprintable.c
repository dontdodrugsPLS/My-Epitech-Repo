/*
** EPITECH PROJECT, 2025
** Task 16 - my_str_isprintable - test
** File description:
** none.
*/

#include <criterion/criterion.h>

int my_str_isprintable(char const *str);

Test(my_str_isprintable, only_letter)
{
    cr_assert(my_str_isprintable("test") == 1);
    cr_assert(my_str_isprintable("test\n") == 0);
}
