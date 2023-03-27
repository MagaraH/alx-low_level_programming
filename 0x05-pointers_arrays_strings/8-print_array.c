#include "main.h"
/**
 * print_array - function that prints elemts of an array
 *
 * @a: function parameter
 * @n: function parameter
 * Return: 0
 */
oid print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d, ", a[i]);
	}
		if (i == (n - 1))
		{
			printf("%d", a[n - 1]);
		}
			printf("\n");
}
