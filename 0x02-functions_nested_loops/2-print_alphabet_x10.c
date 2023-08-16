#include "main.h"
/**
 * print_alphabet_x10 - function will print alphabet 10 times
 *
*/

void print_alphabet_x10(void)
{
	int alpha, x;

	for (x = 0; x <= 9; x++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
			_putchar(alpha);
		_putchar('\n');
	}
}
