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
	char i;
	char ALPHA = 'A';

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
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
