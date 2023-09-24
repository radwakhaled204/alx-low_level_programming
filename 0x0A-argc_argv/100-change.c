#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins.
 * @argc: argument count.
 * @argv: argument vector.
 * Return: 0 if error 1.
 */

int main(int argc, char *argv[]) {
    int cents;
/**
 * @c: cousins.
 * @n_c: num of cousins.
 */
    int c[] = {25, 10, 5, 2, 1};
    int c_n = sizeof(c) / sizeof(c[0]);
    int count = 0;

    if (argc != 2) {
        printf("Error\n");
        return 1;
    }

    cents = atoi(argv[1]);

    if (cents < 0) {
        printf("0\n");
        return 0;
    }

    for (int x = 0; x < c_n; x++) {
        count += cents / coins[x];
        cents %= c[x];
    }

    printf("%d\n", count);

    return 0;
}
