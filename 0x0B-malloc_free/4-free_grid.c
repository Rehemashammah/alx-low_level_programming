#include "main.h"

/**
 * free_grid - Free memory in the 2 dimensional array
 * @grid: array address
 * @height: height of grid
 *
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
