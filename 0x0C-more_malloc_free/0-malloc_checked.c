#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - Allocates memory and checks for allocation success.
 * @b: The number of bytes to allocate.
 *
 * Return: A pointer to the allocated memory if successful.
 * If allocation fails, the function terminates the program with status 98.
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
