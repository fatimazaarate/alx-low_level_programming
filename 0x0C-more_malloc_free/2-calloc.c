#include <stdlib.h>
#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: size of each element
 *
 * Return: pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int n;

	if (nmemb == 0 || size == 0)
		return (NULL);

	n = size * nmemb;

	ptr = malloc(n);

	if (ptr == NULL)
		return (NULL);

	memset(ptr, 0, n);

	return (ptr);
}
