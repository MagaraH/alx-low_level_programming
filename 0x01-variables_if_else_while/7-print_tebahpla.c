#include <stdio.h>
/**
 * main - containsall the code for this program
 *
 * Description: Write a program that prints the lowercase alphabet in reverse,
 * followed by a new line.
 * You can only use the putchar function
 * Return: (0)
 */
int main(void)
{
	char a = 'z';

	while (a >= 'a')
	{
		putchar(a);
		a--;
	}
	putchar('\n');
	return (0);
}
