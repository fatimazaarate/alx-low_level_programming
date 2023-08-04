#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - multiplies two numbers.
 * @argc: number of arguments.
 * @argv: array of arguments.
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int i = 1, mult = 0;

	if (argc == 1 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		mult = atoi(argv[i]) * atoi(argv[i + 1]);
		printf("%d\n", mult);
	}
	return (0);
}
