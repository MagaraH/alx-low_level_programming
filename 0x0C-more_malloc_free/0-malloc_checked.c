#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
/**
 * malloc_checked -  a function that allocates memory using malloc
 *
 * @b: function parameter
 * Return: ptr to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	char *x;

	x = malloc(sizeof(char) * b);
	if (x == NULL)
	{
		exit(98);
	}
	return (x);
}
