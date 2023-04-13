#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - function that returns a pointer
 * to a 2 dimensional array of integers
 *
 * @width: width of the array
 * @height: array height
 * Return: pointer to array or null if failure
 */
int **alloc_grid(int width, int height)
{
	int **ptr;
	int x;
	int y;

	if (width <= 0 || height <= 0)
		return (NULL);
	ptr = (int **)malloc(height * sizeof(int *));
	if (ptr == NULL)
		return (NULL);
	for (x = 0 ; x < height ; x++)
	{
		ptr[x] = (int *)malloc(width * sizeof(int));
		if (ptr[x] == NULL)
		{
			for (y = 0 ; y < x ; y++)
				free(ptr[y]);
			free(ptr);
			return (NULL);
		}
		for (y = 0 ; y < width ; y++)
			ptr[x][y] = 0;
	}
	return (ptr);
}
