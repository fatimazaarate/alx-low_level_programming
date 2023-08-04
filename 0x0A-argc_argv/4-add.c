#include <stdio.h>
#include <stdlib.h>

/**
 * main - Print the result, followed by a new line.
 * @argc: number of arguments.
 * @argv: array of arguments.
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i = 0, sum = 0;

	if (argc == 1)
	{
		printf("%d\n", 0);
	}
	i = 1;
	if (atoi(argv[i]) > 0)
	{
		for (; i < argc; i++)
		{
		sum += atoi(argv[i]);
		}
	printf("%d\n", sum);
	}
	return (0);
}
