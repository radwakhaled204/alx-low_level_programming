#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print the value of n from 3 condition
 *               greater or equal or less
 *
 * Return: 0 (Success)
*/
int main(void)
{
	int n, d;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
d = n % 10;
	if (d > 5)
		printf("last digit of %l is %l and is greater than 5\n", n, d);
	else if (d == 0)
		printf("last digit of %l is %l and is 0\n", n, d);
	else if (d < 6 && d != 0)
		printf("last digit of %l is %l and is less than 6\n", n, d);
	return (0);
}
