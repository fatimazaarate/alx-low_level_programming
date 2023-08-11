#include "main.h"
#include <stdlib.h>

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *ptr1;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
		return (malloc(new_size));

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	ptr1 = malloc(new_size);

	if (ptr1 == NULL)
		return (NULL);

	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			ptr1[i] = ptr[i];
	}

	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			ptr1[i] = ptr[i];
	}

	free(ptr);
	return (ptr1);
}
