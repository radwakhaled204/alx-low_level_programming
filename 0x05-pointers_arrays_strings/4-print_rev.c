#include "main.h"

/**
 * print_rev - print string in reverse with  new line.
 * @s: input to be reverse.
 */

void print_rev(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	for (int i = len - 1; i >= 0; i--)
		_putchar(s[len]);

	_putchar('\n');
}
