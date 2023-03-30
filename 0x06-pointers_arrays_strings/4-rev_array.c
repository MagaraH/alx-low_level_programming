#include "main.h"
/**
 * reverse_array - fuction that reverses array of integers
 *
 * @a: array
 * @n: array size
 * Return: 0
 */
void reverse_array(int *a, int n)
{
	int i;
	int temp;

	for (i = 0 ; i < n / 2 ; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
