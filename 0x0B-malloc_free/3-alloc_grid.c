#include "main.h"

/**
 * alloc_grid - creates a 2d array of ints
 * @height: no. of pointers to create
 * @width: memor span of poiters
 * Return: address of array
*/

int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width < 1 || height < 1)
		return (NULL);
	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			i--;
			for (; i >= 0; i--)
				free(grid[i]);
			free(grid);
		}
			for (j = 0; j < width; j++)
				grid[i][j] = 0;
	}
	return (grid);
}
