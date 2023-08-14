#include <stdio.h>
#include "dog.h"
#include <string.h>

dog_t *new_dog(char *name, float age, char *owner)
{
	int len1, len2;

	len1 = strlen(name);
	len2 = strlen(owner);

	dog_t *dog = malloc(sizeof(dog_t));
	if(dog == NULL)
		return (NULL);

	dog->name = malloc((len1 + 1));
	if(dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc((len2 + 1));
	if(dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	dog->age = age;
	strcpy(dog->owner, owner);
	strcpy(dog->name, name);

	return (dog);
}
