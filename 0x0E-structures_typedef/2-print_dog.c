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
if (d->name != NULL)
{
printf("Name: %s\n", d->name);
}
else
{
printf("Name: (nil)\n");
}
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}
