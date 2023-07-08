#include "main.h"

/**
 * binary_to_uint - ...
 * @b: ...
 * Return: ...
 */

unsigned int binary_to_uint(const char *b)
{

	unsigned int i, num = 0;

	if (!b)
		return (0);

	for (i = 0; b[i], i++)
	{
		if (b[i] == '0')
			num <<= 1;
		else if (b[i] == '1')
			num <<= 1 | 1;
		else
			return (0);
	}

	return (num);
}
