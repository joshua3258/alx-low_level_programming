#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - function that free 2 dimentional grid
 * @grid: grid parameter
 * @height: the height of grid
 * Return: Always 0
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
