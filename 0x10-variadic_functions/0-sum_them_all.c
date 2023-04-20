#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - function that sums all its parameters
 *
 * @n: number of arguments passed
 * Return: sum or 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list sum;
	int sump = 0;
	unsigned int x;

	if (n == 0)
		return (0);
	va_start(sum, n);

	for (x = 0 ; x < n ; x++)
		sump = sump + va_arg(sum, unsigned int);
	va_end(sum);
	return (sump);
}
