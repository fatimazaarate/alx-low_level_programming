#include "main.h"

/**
* print_binary - prints the binary equivalent of a decimal number
* @n: number to print in binary
*/

void print_binary(unsigned long int n)
{
	int i, count = 0;
	unsigned long int bin;

	for (i = 63; i >= 0; i--)
	{
		bin = n >> i;

		if (bin & 1)
		{
			_putchar('1');
			count++;
		}
		else if (bin)
			_putchar('0');
	}
	if (!bin)
		_putchar('0');
}
