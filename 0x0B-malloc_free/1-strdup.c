#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * _strdup - duplicate to new memory space location
 * @str: char
 *
 * Return: 0
 *
 */
char *_strdup(char *str)
{
	char *dup;
	int n, i;

	n = strlen(str);
	dup = (char *) malloc(n * sizeof(char));
	if (dup == NULL)
		return (NULL);

	for (i = 0; i < n; i++)
	{
		dup[i] = str[i];
	}
	return (dup);
}
