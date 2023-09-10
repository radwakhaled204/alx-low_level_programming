#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: the string
 */

void puts_half(char *str)
{
	int x = 0;
	int i;

	while (str[x] != '\0')
	{
		x++;
	}
	if (x % 2 == 0)
	{
		for (i = x / 2; i < x; i++)
			_putchar(str[i]);
		_putchar('\n');
	}
	else if (x % 2 == 1)
	{
		for (i = ((x - 1) / 2) + 1; i < x; i++)
			_putchar(str[i]);
		_putchar('\n');
	}
}
