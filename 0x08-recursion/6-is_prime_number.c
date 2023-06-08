#include "main.h"

/**
 * _prime -checks if integer is prime or not.
 * @a: test case/iterator, recurring factor
 * @b: integer to be checked
 * Return: 1 if @b is prime number/ 0 if it's not
 */

int _prime(int a, int b)
{
	if (b % a == 0 || b < 2)
		return (0);
	else if (a > b  / 2)
		return (1);
	return (_prime(a + 1, b));
}


/**
 * is_prime_number - Returns 1 if inputted no is prime number
 * @n: Number to be checked
 * Return: 1 if @n is prime, 0 if @n isn't
 */

int is_prime_number(int n)
{
	return (_prime(2, n));
}
