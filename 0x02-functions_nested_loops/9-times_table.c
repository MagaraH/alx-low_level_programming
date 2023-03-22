#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0.
 *
 * Return: always void
 */
void times_table(void)
{
	int x;
	int y;

	for (x = 0 ; x <= 9 ; x++)
	{
		y = 0;
	_putchar('0');
	for (y = 1 ; y <= 9; y++)
	{
		if (x * y > 9)
		{
			_putchar(',');
			_putchar(' ');
			_putchar('0' + (x * y) / 10);
			_putchar('0' + (x * y) % 10);
		}
		else
		{
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			_putchar('0' + (x * y));
		}
	}
	_putchar('\n');
	}
}
