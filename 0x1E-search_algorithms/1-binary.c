#include "search_algos.h"
#include "math.h"

/**
 * binary_search - searches for a value in an array of integers
 * using the Linear search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: the value to search for
 * Return: the first index where value is located else -1
*/

int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1, i;
	size_t mid;

	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			if (i == right)
				printf("%d\n", array[i]);
			else
				printf("%d, ", array[i]);
		}

		mid = floor((left + right) / 2);

		if (value == array[mid])
			return (mid);
		else if (value < array[mid])
			right = mid - 1;
		else
			left = mid + 1;
	}
	return (-1);
}
