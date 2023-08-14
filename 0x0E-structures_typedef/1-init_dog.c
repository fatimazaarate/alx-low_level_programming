#include <stdio.h>
#include "dog.h"
#include <string.h>

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));

	d->name = name;
	d->owner = owner;
	d->age = age;
}
