#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print alphabet expect two char
 *
 * Return: 0 (Success)
*/
int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		if (alpha == 'e' || alpha == 'q')
			alpha++;
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}
