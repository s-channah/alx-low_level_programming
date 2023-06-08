#include "main.h"

/**
 * factorial -function that returns the factorial of int n
 * @n: integer to get and return factorial from
 * Return: The factorial of @n / -1 where n is negative / 1 where n == 0
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);

	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
