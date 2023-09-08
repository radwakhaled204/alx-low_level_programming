#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: string to get length.
 * Return: the length of @s.
 */

int _strlen(char *s)
{
	int c = 0;

	for (int i = 0; s[i] != '\0'; i++)
	{
		c++;
	}
	return (c);
}
