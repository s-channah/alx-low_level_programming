#include "main.h"

/**
 * _pow_recursion- returns the value of x raised to power of y
 * @x: integer number to be raised/base
 * @y: integer that is the power/exponent
 * Return: value of x raised to power y / -1 where y is negative
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1); /* Base Condition */
	else
		return (x * _pow_recursion(x, (y - 1)));
}
