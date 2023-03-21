#include "main.h"
/**
 * print_last_digit - function tha print last digit
 * @digit: function parameter
 * Return: lastDigit
 */
int print_last_digit(int digit)
{
	int lastDigit;

	lastDigit = digit % 10;
	if (digit < 0)
		lastDigit = -lastDigit;
	_putchar(lastDigit + '0');
	return (lastDigit);
}
