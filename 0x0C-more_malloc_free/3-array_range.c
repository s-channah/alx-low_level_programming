#include "main.h"
#include <stdlib.h>

/**
 * array_range - create array with element from min to max
 * @min: minimum character
 * @max: maximum integer in the array
 * Return: pointer to the array newly created
 */

int *array_range(int min, int max)
{
	int *array;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	array = malloc(sizeof(int) * size);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = min++;

	return (array);

}
