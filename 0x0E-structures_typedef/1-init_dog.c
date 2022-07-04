#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Entry point
 * @owner: store a strig for main
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	/* Passing to stucture from main */
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
