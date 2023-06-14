#include "main.h"
#include <stdlib.h>

/**
 * create_array - create char array of size size & assign char c into it
 * @size: The size/number of elements of array created and initialized
 * @c: THe char to initialize the array with
 * Return: pointer to array formed/ NULL if function fails
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = (char *)malloc(sizeof(char) * size);

	if (array == 0)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
