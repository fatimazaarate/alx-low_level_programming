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
	int i, j;
	int N = n;
	int len1 = 0, len2 = 0;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s1 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);

	if (N >= len2)
		N = len2;

	concat = malloc(sizeof(char) * (len1 + N + 1));

	if (concat == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		concat[i] = s1[i];


	for (j = 0; j < N; j++)
	{
		concat[i + j] = s2[j];
	}
	concat[i + j] = '\0';

	return (concat);
}
