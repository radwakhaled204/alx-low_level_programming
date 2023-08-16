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
	char chr[] = "_putchar";
	int ch;

	for (ch = 0; ch < 8; ch++)
		_putchar(chr[ch]);
	_putchar('\n');

	return (0);

}
