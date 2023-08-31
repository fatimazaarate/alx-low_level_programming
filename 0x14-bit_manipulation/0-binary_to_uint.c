#include "main.h"

/**
* _power - pow of x and y
* @x: first num
* @y: second num
* Return: integer
*/

int _power(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _power(x, y - 1));
}

/**
* binary_to_uint - converts a binary number to an unsigned int
* @b: pointing to a string of 0 and 1 chars
*
* Return: the converted number
*/

unsigned int binary_to_uint(const char *b)
{
	int i, j, len, n;
	unsigned int num = 0;

	if (b == NULL)
		return (0);

	len = strlen(b);

	for (i = len - 1, j = 0; i >= 0; i--, j++)
	{
		if (b[i] == '1')
			n = _power(2, j);
		else if (b[i] == '0')
			n = 0;
		else
			return (0);

		num += n;
	}
	return (num);
}
