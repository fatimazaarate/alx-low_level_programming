#include "variadic_functions.h"

/**
*
*/

void print_all(const char * const format, ...)
{
	int index = 0;
	char *s;

	va_list args;
	va_start(args, format);

	while( format[index] != '\0')
	{
		switch (format[index])
		{
			case 'c' : 
				printf("%c", va_arg(args, char));
				break;
			case 'i' :
				printf("%d", va_arg(args, int));
				break;
			case 'f' :
				printf("%f", va_arg(args, float));
				break;
			case 's' :
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
		format++;
	}
	va_end(args);

	printf("\n");
}

