#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory through malloc use
 * @b: the number of bytes (size) allocated memory
 * Return: pointer to allocated memory/terminate with status value 98
 */


void *malloc_checked(unsigned int b)
{

	void *n;

	n = malloc(b);

	if (n == NULL)
		exit(98);

	return (n);
}
