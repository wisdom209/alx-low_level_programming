#include "main.h"

/**
 * alloc_grid - creates a 2d arr on heap
 * @width: column size
 * @height: row size
 *
 * Return: 2d grid
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid;

	grid = (int **)malloc(sizeof(int) * height);

	for (i = 0; i < width; i++)
		grid[i] = (int *)malloc(sizeof(int) * width);

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}

	return (grid);
}
