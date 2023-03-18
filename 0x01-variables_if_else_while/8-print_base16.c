#include <stdio.h>
/**
 * main - Write a program that prints all the numbers of base 16
 *  in lowercase, followed by a new line.
 *  You can only use the putchar function
 *  You can only use putchar three times in your code
 *  Return: (0)
 */
int main(void)
{
	char hex[] = "0123456789abcdef";
	int i;

	for (i = 0; i < 16; i++)
	{
		putchar(hex[i]);
	}
	putchar('\n');
	return (0);
}
