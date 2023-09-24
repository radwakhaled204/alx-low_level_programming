#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>


/**
 * main -  prints its name.
 * @argc: argument count.
 * @argv: argument vector.
 * Return: 1 if error otherwise 0.
 */

int main(int argc, char *argv[])
{
	int n, s = 0;

    for (int x = 1; x < argc; x++) {
        char *arg = argv[x];
        int j = 0;

        while (arg[j]) {
            if (!isdigit(arg[j])) {
                printf("Error\n");
                return 1;
            }
            j++;
        }

        n = atoi(arg);

        if (n > 0) {
            s += n;
        }
    }

    printf("%d\n", s);
    return 0;
}
