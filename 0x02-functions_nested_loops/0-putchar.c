#include "main.h"

/**
 * main - entry point
 *
 * Description: prints _putchar with putchar
 *
 * Return: 0 (Success)
*/

int main(void)
{
	char wrd[] = "_putchar";
	int c;

	for (c = 0; c < 8; c++)
		_putchar(wrd[c]);
	_putchar('\n');

	return (0);

}
