#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all int parameters
 * @n: number of paramter passed, to be summed
 * @...: variable no of parameters based on @n value
 * Return: 0 if n == 0 / sum of all int paarmeters
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list args;

	va_start(args, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
		sum += va_arg(args, int);

	va_end(args);

	return (sum);
}
