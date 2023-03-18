#include <stdio.h>
/**
 * main - Contains all code for this program
 *
 * Description: Write a program that prints all single digit numbers
 *  of base 10 starting from 0, followed by a new line.
 * Return: (0)
 */
int main(void)
{
	int x = 0;

	while (x < 10)
	{
		printf("%d", x);
		x++;
	}
	putchar('\n');
	return (0);

}
