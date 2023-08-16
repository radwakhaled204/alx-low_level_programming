#include "main.h"
/**
 * print_alphabet -  print alphabet in lowercase using _putchar function
 *
*/

void print_alphabet(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar('\n');
	return (0);
}
