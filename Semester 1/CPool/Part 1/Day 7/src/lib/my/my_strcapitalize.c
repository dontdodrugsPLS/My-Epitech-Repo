/*
** EPITECH PROJECT, 2025
** Task 10 - my_strcapitalize
** File description:
** none.
*/

char *my_strcapitalize(char *str)
{
    char *p = str;
    int new_word = 1;

    while (*p != '\0') {
        if (*p >= 'a' && *p <= 'z' && new_word) {
            *p -= 32;
        }
        if ((*p < 'a' || *p > 'z') &&
            (*p < 'A' || *p > 'Z') &&
            (*p < '0' || *p > '9')) {
            new_word = 1;
        } else {
            new_word = 0;
        }
        p++;
    }
    return str;
}
