#include "function_pointers.h"

/**
 * int_index - this searches for an integer
 * @array: array to be searched in
 * @size: number of elements in the array called array
 * @cmp: pointer to function that compares values
 * Return: index of first element that don't turn 0 in cmp()
 *         or -1 if size is negative or when no match is seen
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array && cmp)
	{
		for (index = 0; index < size; index++)
		{
			if (cmp(array[index]) != 0)
				return (index);
		}
	}
	return (-1);
}
