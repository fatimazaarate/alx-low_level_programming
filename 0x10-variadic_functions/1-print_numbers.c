#include "variadic_functions.h"

/**
* print_numbers - prints numbers, followed by a new line.
* @separator: the string to be printed between numbers
* @n: number of integers passed to the function
*
* Return: always (0);
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int x;

	if (separator == NULL)
		separator = "";

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		x = va_arg(args, int);

		if (i == n - 1)
			separator = "";

		printf("%d%s", x, separator);
	}
	printf("\n");
}
