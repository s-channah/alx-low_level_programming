#include "function_pointers.h"

/**
 * array_iterator - executes function given as parameter on each array element
 * @array: the array to be printed
 * @size: number array elements / array size
 * @action: pointer to the function that prints int array stored @ array
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
