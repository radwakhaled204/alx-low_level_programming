#include "main.h"

/**
<<<<<<< HEAD
 * print_diagonal - function to print more numbers
 *	f
 *
 * Return: Always 0 (Success)
 */
=======
  * print_diagonal - Draws a diagonal lines according parameter
  * @n: The number of times to print diagonal lines
  */
>>>>>>> f60a7a467a796eca7f61b42e292cadbb8981dce1

void print_diagonal(int n)
{
	int x, y;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < n; x++)
		{
			for (y = 0; y < x; y++)
			{
				_putchar(32);
			}

			_putchar(92);
			_putchar('\n');
		}
	}
}
