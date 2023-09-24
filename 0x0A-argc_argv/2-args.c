#include <stdio.h>
#include <stdlib.h>

/**
 * main -  prints its name.
 * @argc: argument count.
 * @argv: argument vector.
 */

int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
		printf("%s\n", argv[x]);

	return (0);
}
