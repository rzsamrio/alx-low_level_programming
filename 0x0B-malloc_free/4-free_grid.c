#include "main.h"

/**
 * free_grid - releases space allocated by alloc_grid
 * @grid: address of grid
 * @height: no. of primary pointers with memory in grid
*/

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
