#include <stdio.h>
#include <stdio.h>
#include "dog.h"

/**
 * init_dog - function that initialize all variable.
 * @d: A pointer.
 * @name: a name of dog.
 * @owner: onwer of dog.
 * @age: age of dog.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == Null)
		return;
	d->name = name;
	d->owner = owner;
	d->age = age;
}
