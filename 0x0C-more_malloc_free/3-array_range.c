#include <string.h>
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - function that creates an array of integers
 *
 * @min: minimum array value
 * @max: maximum array value
 * Return: pointer to allocated memory
 */
int *array_range(int min, int max)
{
	int *ptr;
	int x;

	if (min > max)
		return (NULL);
	ptr = malloc(sizeof(int) * (max - min + 1));
	if (ptr == NULL)
		return (NULL);
	for (x = 0 ; x < (max - min + 1) ; x++)
		ptr[x] = min + 1;
	return (ptr);
}
