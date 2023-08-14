#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print alphabet in reverse
 *
 * Return: 0 (Success)
*/
int main(void)
{
	char alpha = 'z';
	
	while (alpha >= 'a')
	{
		putchar(alpha);
		alpha--;
	}
	putchar('\n');
	return (0);
}
