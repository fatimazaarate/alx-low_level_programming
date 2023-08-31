#include "main.h"
#include <math.h>

unsigned int binary_to_uint(const char *b)
{
	int i, j, len, num = 0, n;

	if (b == NULL)
		return (0);

	len = strlen(b);

	for (i = len - 1, j = 0; i >= 0; i--, j++)
	{
		if (b[i] == '1')
			n = pow(2, j);
		else if (b[i] == '0')
			n = 0;
		else
			return (0);

		num += n;
	}
	return (num);
}
