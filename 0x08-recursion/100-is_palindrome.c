#include "main.h"

/**
 * _strlen_recursion - prints the length of a string
 * @s: the string to be measured
 * Return: string length
 */


int _strlen_recursion(char *s)
{
	if (*s)
		return (1 + _strlen_recursion(s + 1));
	return (0);
}


/**
 * _palindrome - checks if a string is a palindrome
 * @s: the string to be checked
 * @i: the left index
 * @j: the right index
 * Return: 1 if @s is a palindrome, 0 if otherwiese
 */

int _palindrome(char *s, int i, int j)
{
	if (s[i] == s[j])
	{
		if (i > j / 2)
			return (1);
		return (_palindrome(s, i + 1, j - 1));
	}

	return (0);
}


/**
 * is_palindrome - checks if @s is a palindrome
 * @s: this is the string to be checked
 * Return: 1 if a palindrome, 0 if otherwise
 */

int is_palindrome(char *s)
{
	return (_palindrome(s, 0, _strlen_recursion(s) - 1));
}
