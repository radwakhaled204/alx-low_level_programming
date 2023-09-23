#include "main.h"

/**
 * _puts -  print string with new line.
 * @str: string to print.
 */

void _puts(char *str)
{
	while (*str != '\0')
		str++;
		_putchar(*str);

	_putchar('\n');
}
