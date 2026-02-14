/*
** EPITECH PROJECT, 2025
** Task 03 - my_strstr - test
** File description:
** none.
*/

#include <criterion/criterion.h>

char *my_strstr(char *str, char const *to_find);

Test(my_strstr, normal_find)
{
    char str[] = "salut cava";
    cr_assert_str_eq(my_strstr(str, "cava"), "cava");
}
