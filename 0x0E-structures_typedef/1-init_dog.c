#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - a function that initialize a variable.
 * @d: pointer.
 * @name: name of dog.
 * @owner: owner of dog.
 * @age: age of dog.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->owner = owner;
	d->age = age;
}
