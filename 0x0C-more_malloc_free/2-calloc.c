#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * _memset - fills memory with a constant byte
 * @s: memory area to be filled
 * @b: char to copy
 * @n: number of times to copy b
 *
 * Return: pointer to the memory area s
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
