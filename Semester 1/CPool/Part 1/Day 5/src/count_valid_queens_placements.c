/*
** EPITECH PROJECT, 2025
** Task 08 - count_valid_queens_placements
** File description:
** none.
*/

int is_position_safe(const int position[], int row, int column)
{
    int c = 0;

    for (int r = 0; r < row; r++) {
        c = position[r];
        if (c == column) {
            return (0);
        }
        if (c - column == row - r || column - c == row - r) {
            return (0);
        }
    }
    return (1);
}

void solve(int position[], int row, int n, int *valid_position)
{
    if (row == n) {
        (*valid_position)++;
        return;
    }
    for (int column = 0; column < n; column++) {
        if (is_position_safe(position, row, column)) {
            position[row] = column;
            solve(position, row + 1, n, valid_position);
        }
    }
}

int count_valid_queens_placements(int n)
{
    int position[n];
    int valid_position = 0;

    if (n <= 0) {
        return (0);
    }
    solve(position, 0, n, &valid_position);
    return (valid_position);
}
