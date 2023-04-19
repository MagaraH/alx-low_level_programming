#include "function_pointers.h"
/**
 * int_index - a function that searches for an integer.
 *
 * @array: array to search from
 * @size: size of array
 * @cmp: a pointer to the function to be used to compare values
 * Return: index of first element hat cmp does not return
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}
	for (x = 0 ; x < size ; x++)
	{
		if (cmp(array[x]) != 0)
			return (x);
	}
	return (-1);
}
