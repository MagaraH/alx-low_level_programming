#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_grid - function that frees a 2 dimensional grid
 *
 * @grid: address of grid to free
 * @height: height of grid
 */
void free_grid(int **grid, int height)
{
	int x;

	if (grid != NULL && height != 0)
	{
		for (x = 0 ; x < height ; x++)
		{
			free(grid[x]);
		}
		free(grid);
	}
}
