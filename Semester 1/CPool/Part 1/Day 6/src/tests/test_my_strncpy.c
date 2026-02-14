/*
** EPITECH PROJECT, 2025
** Task 02 - my_strncpy - test
** File description:
** none.
*/

#include <criterion/criterion.h>
#include <string.h>

char *my_strncpy(char *dest, char const *src, int n);

Test(my_strncpy, copy_five_characters_in_empty_arr)
{
    char dest[6] = {0};
    my_strncpy(dest, "HelloWorld", 5);
    cr_assert_str_eq(dest, "Hello");
}
