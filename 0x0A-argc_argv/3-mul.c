#include <stdio.h>
#include <stdlib.h>

/**
 * main -  prints its name.
 * @argc: argument count.
 * @argv: argument vector.
 * Return: 1 if error otherwise 0.
 */

int main(int argc, char *argv[])
{
	int x, y, z;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	/**
	* atoi - is representation of a number (in ASCII) into an integer value.
	*/
	x = atoi(argv[1]);
	y = atoi(argv[2]);
	z = x * y;

	printf("%d\n", z);
	return (0);
}
