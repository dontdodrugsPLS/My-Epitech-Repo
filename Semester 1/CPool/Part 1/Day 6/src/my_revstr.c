/*
** EPITECH PROJECT, 2025
** Task 03 - my_revstr
** File description:
** none.
*/

void my_putchar(char c);

int get_str_len(char *str)
{
    int iter = 0;

    while (str[iter] != '\0') {
        iter++;
    }
    return (iter);
}

char *my_revstr(char *str)
{
    int first_char = 0;
    int last_char = get_str_len(str) - 1;
    char temp;

    while (first_char < last_char) {
        temp = str[first_char];
        str[first_char] = str[last_char];
        str[last_char] = temp;
        last_char--;
        first_char++;
    }
    return str;
}
