#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Print the result, followed by a new line.
 * @argc: number of arguments.
 * @argv: array of arguments.
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i = 1, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
	}
	while (i < argc)
	{
	if (strspn(argv[i], "0123456789") != strlen(argv[i]))
	{
		printf("Error\n");
		return (1);
	}
	else
		sum += atoi(argv[i]);
	i++;
	}
	if(sum != 0)
		printf("%d\n", sum);
	
	return (0);
}
