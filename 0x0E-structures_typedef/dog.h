#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - contains dog's name, owner & age
 * @name: dog's name
 * @owner: dog's owner
 * @age: dog's age
 */

struct dog
{
	char *name;
	char *owner;
	float age;
};

#endif
