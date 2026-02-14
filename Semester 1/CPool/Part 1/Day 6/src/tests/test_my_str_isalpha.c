/*
** EPITECH PROJECT, 2025
** Task 12 - my_str_isalpha - test
** File description:
** none.
*/

#include <criterion/criterion.h>

int my_str_isalpha(char const *str);

Test(my_str_isalpha, only_letter)
{
    cr_assert(my_str_isalpha("test") == 1);
    cr_assert(my_str_isalpha("test123") == 0);
}

Test(my_str_isalpha, empty_string)
{
    cr_assert(my_str_isalpha("") == 1);
}

Test(my_str_isalpha, only_numbers)
{
    cr_assert(my_str_isalpha("121313") == 0);
}

Test(my_str_isalpha, only_maj)
{
    cr_assert(my_str_isalpha("ABCDE") == 1);
}

Test(my_str_isalpha, special_ascii)
{
    cr_assert(my_str_isalpha("[]") == 0);
}
