#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - function that prints strings
 *
 * @n: number of strings
 * @separator: string to be printed between the strings
 * Return: 0
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list n_print;
	char *str;
	unsigned int x;

	va_start(n_print, n);
	for (x = 0 ; x < n ; x++)
	{
		str = va_arg(n_print, char *);
		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}
		if (separator != NULL && x != (n - 1))
			printf("%s", separator);
	}
	va_end(n_print);
	printf("\n");
}
