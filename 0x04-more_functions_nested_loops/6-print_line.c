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

	if (i <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1 ; i <= n ; i++)
		{
			_putchar('-');
		}
		_putchar('\n');
	}
}
