#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print alphabet
 *
 * Return: 0 (Success)
*/
int main(void)
{
	char alpha = 'a';
	char ALPHA = 'A';

	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}

	/*UPPERCASE*/
	while (ALPHA <= 'Z')
	{
		putchar(ALPHA);
		ALPHA++;
	}
	putchar('\n');
	return (0);
}
