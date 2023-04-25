#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees a 2d array previously created by alloc_gric
 * @grid: pointer to the 2d array
 * @height: height of the array
 */
void free_grid(int **grid, int height)
{
	int row;

	for (row = 0; row < height; row++)
	{
		free(grid[row]);
	}
	free(grid);
}
