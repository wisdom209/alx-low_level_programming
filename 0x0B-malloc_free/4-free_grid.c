#include "main.h"

/**
 * free_grid - frees allocated 2d memory
 * @grid: 2D array to free
 * @height: number of rows
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
