#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion -  returns the length of a string.
 * @s : input
 * Return: The length of the string
 */

int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s)
	{
	count++;
	count += _strlen_recursion(s + 1);
	}
	return (count);
}
