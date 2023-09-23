#include "main.h"

/**
 * print_rev - function that prints string in reverse.
 * @s: input.
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
