/*
** EPITECH PROJECT, 2025
** Task 06 - my_sort_int_array
** File description:
** none.
*/

#include <stdio.h>

void my_putchar(char c);

void my_sort_int_array(int *array, int size)
{
    int i = 0;
    int temp;

    while (i < size - 1) {
        if (array[i + 1] < array[i]) {
            temp = array[i + 1];
            array[i + 1] = array[i];
            array[i] = temp;
            i = 0;
        } else {
            i += 1;
        }
    }
}
