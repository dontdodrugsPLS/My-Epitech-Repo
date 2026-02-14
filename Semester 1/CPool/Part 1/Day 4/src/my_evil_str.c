/*
** EPITECH PROJECT, 2025
** Task 04 - my_evil_str
** File description:
** none.
*/

int get_str_len(char const *str)
{
    int iter = 0;

    while (str[iter] != '\0') {
        iter++;
    }
    return (iter);
}

char *my_evil_str(char *str)
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
