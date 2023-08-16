#include "function_pointers.h"

/**
 *
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (cmp == NULL)
		return(1);

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (array[i] == cmp(array[i]))
		{
			return i;
			break;
		}

	}
	return i;
}
