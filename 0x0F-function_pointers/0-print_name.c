#include "function_pointers.h"

/**
 * print_name - function that prints name
 * @name: This is the name to be printed
 * @f: pointer to functions that prints character arrays passed to it
 * Return: void/ nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
