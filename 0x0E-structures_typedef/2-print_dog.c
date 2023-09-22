#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - function to print a struct.
 * @d: A pointer.
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	printf("Name: %s\n", d->name ? d->name : "(nil)");
	printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
	printf("Age: %f\n", d->age);
}
