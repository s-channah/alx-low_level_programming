#include "main.h"

/**
 * _puts_recursion- A function that prints a string followed by /n
 * @s: The string to be printed
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s); /* *s != '\0'*/
		_puts_recursion(s + 1);
	}
	else  /* where *s == '\0' */
		_putchar('\n');
}
