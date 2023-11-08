#include "dog.h"
#include <stdio.h>

/**
 * init_dog - initializes a dog
 * @d: pointer to a dog
 * @name: dog name
 * @age: dog age
 * @owner: name of the owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
