/*
** EPITECH PROJECT, 2025
** Task 10 - my_strcapitalize - test
** File description:
** none.
*/

#include <criterion/criterion.h>

char *my_strcapitalize(char *str);

Test(my_strcapitalize, array_with_multiple_word)
{
    char str[] = "test test azaz ";
    my_strcapitalize(str);
    cr_assert_str_eq(str, "Test Test Azaz ");
}
