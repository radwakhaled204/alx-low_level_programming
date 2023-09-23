#include "main.h"

/**
 * swap_int - swap values.
 * @a: first input.
 * @b: second input.
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
