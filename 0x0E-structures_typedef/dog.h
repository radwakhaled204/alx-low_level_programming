#ifndef dog_H
#define dog_H

#include <stdio.h>

/**
 * struct dog - A struct contain information about dog.
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

typedef struct dog td_dog;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
