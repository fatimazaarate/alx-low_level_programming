#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - Concatenates two strings up to a certain length.
 *
 * @s1: First input string
 * @s2: Second input string
 * @n: Maximum number of characters from s2 to concatenate
 * Return: A dynamically allocated concatenated string
 * (Remember to free the memory after use)
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, j, N = n, size;
	int k = 0;
	int len1, len2;
	char *concat;

	if (s1 == NULL || s2 == NULL)
	{
		s1 = "";
		s2 = "";
	}

	len1 = strlen(s1);
	len2 = strlen(s2);

	if (len2 <= N)
	{
		size = len1 + len2;
	}
	else
		size = len1 + N;

	concat = malloc(sizeof(char) * (size + 1));

	if (concat == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		concat[i] = s1[i];


	for (j = len1; j < size; j++)
	{
		concat[j] = s2[k];
		k++;
	}
	concat[size] = '\0';

	return (concat);
}
