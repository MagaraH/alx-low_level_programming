#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - functions that prints numbers
 *
 * @separator: string printed between numbers
 * @n: number of arguments
 * Return: nothing, number if sparator is not null
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list n_printed;
	unsigned int x;

	va_start(n_printed, n);

	for (x = 0; x < n ; x++)
	{
		printf("%d", va_arg(n_printed, int));

		if (x != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	va_end(n_printed);
	printf("\n");
}
