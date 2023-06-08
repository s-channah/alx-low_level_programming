#include "main.h"

/**
 * _sqrt- checks for natural square root of an integer
 * @a: integer root to be tested
 * @b: integer number that we are searching for its square root of
 * Return: natural square root or -1 where @b has no natural sqrt
 */

int _sqrt(int a, int b)
{
	if (a * a == b)
		return (a);
	else if (a * a > b)
		return (-1);
	else
		return (_sqrt(a + 1, b));
}



/**
 * _sqrt_recursion- checks for natural square root of an integer
 * @n: integer to find its square root
 * Return: natural square root or -1
 */


int _sqrt_recursion(int n)
{
	return (_sqrt(0, n));
}
