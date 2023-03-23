#include "main.h"
/**
 * more_numbers - function that prints 10x numbers 0 to 14
 *
 * Return: always 0
 */
void more_numbers(void)
{
	int numberPrinted;
	int number;

	for (numberPrinted = 1 ; numberPrinted <= 10 ; numberPrinted++)
	{
		for (number = 0 ; number <= 14 ; number++)
		{
			if (number < 9)
			{
				_putchar((number / 10) + '0');
				_putchar((number % 10) + '0');
			}
		}
	}
}
