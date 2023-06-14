#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - it creates & returns pointer of a 2D array of int
 * @width: width of the grid
 * @height: height of the grid
 * Return: 2D array/NULL if height or width = 0 OR when malloc() can't allocate
 */

int **alloc_grid(int width, int height)
{

	int i, j;

	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = (int **)malloc(sizeof(int *) * height);

	if (grid == 0)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(sizeof(int) * width);
		if (grid[i] == 0)
		{
			for (j = 0; j < i; j++)
				free(grid[j]);
			free(grid);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			grid[i][j] = 0;


	return (grid);
}
