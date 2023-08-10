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
	char *s;
	unsigned int i, j, l1, l2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	l1 = strlen(s1);
	l2 = strlen(s2);

	if (n >= l2)
		n = l2;
	s = (char *) malloc(sizeof(char) * (l1 + n + 1));
		if (s == NULL)
			return (NULL);

	for (i = 0; i < l1; i++)
		s[i] = s1[i];

	for (j = 0; j < n; j++)
		s[i + j] = s2[j];

	s[i + j] = '\0';

	return (s);
}
