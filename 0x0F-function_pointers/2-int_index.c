#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: input
 * @size:  the number of elements in the array
 *@cmp: pointer to a function
 *
 * Return: returns the index of the first element
 * for which the cmp function does not return 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (cmp == NULL)
		return (-1);

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
