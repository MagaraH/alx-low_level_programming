#include "main.h"
/**
 * print_line - prints a straight line
 *
 * @n: function parameter
 * Return: 0
 */
void print_line(int n)
{
	int i;

	if (n)
	{
		for (i = 0 ; i < n ; i++)
			_putchar('-');
	}
	_putchar('\n');
}
