/*
** EPITECH PROJECT, 2025
** star
** File description:
** none.
*/

void my_putchar(char c);

static void print(int space, int show_star, int go_next_line)
{
    for (int i = 0; i < space; i++) {
        my_putchar(' ');
    }
    if (show_star == 1) {
        my_putchar('*');
    }
    if (go_next_line == 1) {
        my_putchar('\n');
    }
}

static void build_top_star(unsigned int size, int mid)
{
    int first_star = mid - 1;
    int last_star = mid - 1;

    for (int i = 0; i < (int)size; i++) {
        if (i == 0) {
            print((size == 1) ? mid : (mid - 1), 1, 1);
        } else {
            first_star -= 1;
            last_star += 1;
            print(first_star, 1, 0);
            print(last_star - first_star - 1, 1, 1);
        }
    }
}

static int calculate_mid_len(unsigned int size)
{
    int result = (int)(size * 2) - 3;

    if (result < 1) {
        result = 1;
    }
    return (result);
}

static void build_mid_border_star(unsigned int size, int mid, int mid_space_len)
{
    int side_len = mid - (int)size;

    for (int i = 0; i <= side_len; i++) {
        print(0, 1, 0);
    }
    print(mid_space_len, 0, 0);
    for (int i = 0; i <= side_len; i++) {
        print(0, 1, 0);
    }
    print(0, 0, 1);
}

static void build_mid_star(unsigned int size, int mid)
{
    int actual_mid_size = mid * 2 - 2;

    if (size == 1) {
        print(1, 1, 0);
        print(3, 1, 1);
        return;
    }
    for (int i = 1; i < (int)size; i++) {
        actual_mid_size -= 2;
        print(i, 1, 0);
        print(actual_mid_size - 1, 1, 1);
    }
    print((int)size, 1, 0);
    actual_mid_size -= 2;
    print(actual_mid_size - 1, 1, 1);
    for (int i = (int)size - 1; i > 0; i--) {
        actual_mid_size += 2;
        print(i, 1, 0);
        print(actual_mid_size - 1, 1, 1);
    }
}

static void build_bottom_star(unsigned int size, int mid, int mid_space_len)
{
    int side_len = mid - (int)size;
    int first_star = side_len - 1;
    int last_star = side_len + mid_space_len + 2;

    for (int i = 0; i < (int)size; i++) {
        if (i == (int)size - 1) {
            print((size == 1) ? mid : (mid - 1), 1, 1);
        } else {
            first_star += 1;
            last_star -= 1;
            print(first_star, 1, 0);
            print(last_star - first_star - 1, 1, 1);
        }
    }
}

void star(unsigned int size)
{
    int mid = (int)size * 3;
    int mid_space_len = calculate_mid_len(size);

    if (size < 1) {
        return;
    }
    build_top_star(size, mid);
    build_mid_border_star(size, mid, mid_space_len);
    build_mid_star(size, mid);
    build_mid_border_star(size, mid, mid_space_len);
    build_bottom_star(size, mid, mid_space_len);
}
