#include "main.h"
/**
 * _puts - prints string in reverse
 *
 * @str: funcction parameter
 * Return: 0
 */
void _puts(char *str)
{
	int i;
	int count = 0;

	for (i = 0 ; str[i] != '\0' ; i++)
		count++;
	for (i = count ; i >= 0 ; i--)
		_putchar(str[i]);
	_putchar('\n');
}
