#include "main.h"
/**
 * swap_int - function that swaps values of integers
 *
 * @a: function parameter 1
 * @b: function parameter 2
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int c; /* new variable created */

	c = *a;
	*a = *b;
	*b = c;
}

