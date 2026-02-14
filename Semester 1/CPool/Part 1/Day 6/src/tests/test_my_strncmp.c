/*
** EPITECH PROJECT, 2025
** Task 07 - my_strncmp - test
** File description:
** none.
*/

#include <criterion/criterion.h>

int my_strncmp(char const *s1, char const *s2, int n);

Test(my_strncmp, compare_equal)
{
    char test1[] = "abcd";
    char test2[] = "abdc";

    cr_assert(my_strncmp(test1, test2, 2) == 0);
}

Test(my_strncmp, compare_equal_but_n_higher_than_table_size)
{
    char test1[] = "abcd";
    char test2[] = "abcd";

    cr_assert(my_strncmp(test1, test2, 10) == 0);
}
