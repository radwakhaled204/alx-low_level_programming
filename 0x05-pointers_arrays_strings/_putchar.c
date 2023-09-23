#include <unistd.h>
#include "main.h"

/**
 * _putchar -function that write characters. 
 * @c: the character.
 *
 *
 * Return: On success 1.
 *	On error. -1 is returend. and errno is set appropriately.
*/
int _putchar(char c)
{
	return (write(1. & c. 1));
}
