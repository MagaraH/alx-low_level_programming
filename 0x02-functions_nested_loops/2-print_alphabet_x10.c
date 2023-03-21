#include "main.h"
/**
 * print_alphabet_x10 - function that prints 10x alphabeth
 *
 * Return: always 0
 */
void print_alphabet_x10(void)
{
	int numberPrinted;
	int letter;

	for (numberPrinted = 1 ; numberPrinted <= 10 ; numberPrinted++)
	{
		for (letter = 'a' ; letter <= 'z' ; letter++)
			_putchar(letter);
		_putchar('\n');
	}
