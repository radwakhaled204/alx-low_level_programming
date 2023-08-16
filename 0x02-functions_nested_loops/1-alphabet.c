#include "main.h"
/**
 * print_alphabet -  print alphabet in lowercase using _putchar function
 *
*/

void print_alphabet(void)
{
	int alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		_putchar(alpha);
	_putchar('\n');
}
