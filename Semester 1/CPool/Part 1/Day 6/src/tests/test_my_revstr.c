/*
** EPITECH PROJECT, 2025
** Task 03 - my_revstr - test
** File description:
** none.
*/

#include <criterion/criterion.h>

char *my_revstr(char *str);

Test(my_revstr, reverse_every_char_of_a_list)
{
    char str[] = "abcd";
    my_revstr(str);
    cr_assert_str_eq(str, "dcba");
}

Test(my_revstr, reverse_empty_and_one)
{
    char str1[] = "";
    char str2[] = "Z";

    cr_assert_str_eq(my_revstr(str1), "");
    cr_assert_str_eq(my_revstr(str2), "Z");
}
