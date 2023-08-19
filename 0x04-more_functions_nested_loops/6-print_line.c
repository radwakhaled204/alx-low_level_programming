#include "main.h"

/**
 * print_line - function to draws a straight line
 *
 * @n: number of times
 *
 * Return: Always 0 (Success)
 */

void print_line(int n)
{
	int ch;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (ch = 1; ch <= n; ch++)
			_putchar('_');
		_putchar('\n');
	}
}
