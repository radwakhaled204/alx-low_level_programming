#ifndef dog_H
#define dog_H

#include <stdio.h>

/*
 * struct dog - a new type define struct dog.
 * @name: first char represent name.
 * @owner: second char represent owner.
 * @age: A float represent age.
 */

struct dog
{
	char *name;
	char *owner;
	float age;
};

#endif
