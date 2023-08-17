#include "variadic_functions.h"
/**
* print_strings -  prints strings, followed by a new line.
* @separator: the string to be printed between the strings
* @n: the number of strings passed to the function
*
* Return: always (0)
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *x;

	if (separator == NULL)
		separator = "";

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		x = va_arg(args, char * );

		if (x == NULL)
			x = "(nil)";

		if (i == n - 1)
			separator = "";

		printf("%s%s", x, separator);
	}
	printf("\n");
	va_end(args);
}
