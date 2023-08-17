#include "variadic_functions.h"

/**
 * print_all - print everything
 * @format: list of types
 */

void print_all(const char * const format, ...)
{
	int index = 0;
	char *s;

	va_list args;

	va_start(args, format);

	while (format[index] != '\0')
	{
		if ((format[index] == 'c' || format[index] == 'i' ||
		format[index] == 'f' || format[index] == 's') && index != 0)
			printf(", ");

		switch (format[index])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				{
				s = va_arg(args, char *);
				if (s == NULL)
					printf("(nil)");
				else
					printf("%s", s);
				}
			default:
				break;
		}
		index++;
	}

	printf("\n");
	va_end(args);
}

