#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates memorywith malloc and free
 * @ptr: pointer to the previously allocated memory
 * @old_size: size of space allocated for ptr (in bytes)
 * @new_size: new size in bytes for new memory bytes
 * Return: pointer to allocated new memory/ NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	unsigned int i;
	char *oldp = ptr;

	if (ptr == NULL)
	{
		p = malloc(new_size);
		return (p);
	}

	else if (new_size == old_size)
		return (ptr);

	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	p = malloc(new_size);

	if (p == NULL)
		return (NULL);

	if (new_size > old_size)
		new_size = old_size;

	for (i = 0; i < new_size; i++)
		p[i] = oldp[i];

	free(ptr);

	return (p);
}
