#include "main.h"
/**
 * print_most_numbers - function that prints mnumbers 0 - 9 
 * except 2 and 4
 *
 * Return: always 0
 */
void print_most_numbers(void)
{
	char x;

	for (x = 48 ; x <= 57 ; x++)
	{
		if (x != 50 && x != 52)
		{
			_putchar(x);
		}
		_putchar('\n')
	}
}
