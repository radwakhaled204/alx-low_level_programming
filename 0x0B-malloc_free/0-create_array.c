#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates array of chars,.
 * @size: size
 * @c: characters.
 * Return: a pointer to the array, or NULL if it fails.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int x;
	char *a = malloc(sizeof(char) * size);

	if (size == 0 || a == NULL)
		return (NULL);
	for (x = 0; x < size; x++)
		a[x] = c;
	return (a);
}
