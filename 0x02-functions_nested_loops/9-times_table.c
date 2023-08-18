#include "main.h"

/**
 * times_table - prints the 9 times table, starting with zero.
 */

void times_table(void)
{
	int row, tab, res;

	for (row = 0; row <= 9; row++)
	{
		_putchar(48);
		for (tab = 1; tab <= 9; tab++)
		{
			_putchar(',');
			_putchar(' ');
			res = row * tab;
			if (res <= 9)
				_putchar(' ');
			else
				_putchar((res / 10) + 48);
			_putchar((res % 10) + 48);
		}
		_putchar('\n');
	}
}
