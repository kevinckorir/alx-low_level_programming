#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - creates a 2D array of integers
 * @width: width of the array
 * @height: height of the array
 *
 * Return: pointer to the 2D array, or NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int row, col;

	if (width <= 0 || height <= 0)
		return (NULL);
	/* Allocate memory for the rows */
	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);
	/* Allocate memory for each row */
	for (row = 0; row < height; row++)
	{
		grid[row] = malloc(sizeof(int) * width);
		if (grid[row] == NULL)
		{
		/* Free the previously allocated rows */
			for (col = 0; col < row; col++)
				free(grid[col]);
			free(grid);
		return (NULL);
		}
	}
	/* Set all elements of the grid to 0 */
	for (row = 0; row < height; row++)
	{
		for (col = 0; col < width; col++)
		{
			grid[row][col] = 0;
		}
	}
	return (grid);
}

