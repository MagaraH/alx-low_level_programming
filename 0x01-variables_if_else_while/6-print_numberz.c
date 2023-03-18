#include <stdio.h>
/**
 * main - contains all code for this program
 *
 * Description: Write a program that prints all single digit numbers
 *  of base 10 starting from 0, followed by a new line.
 *  You are not allowed to use any variable of type char
 *  You can only use the putchar function
 *  You can only use putchar twice in your code
 *  Return: (0)
 */
int main(void)
{
	int x = 0;

	while (x < 10)
	{
		putchar('0' + x);
		x++;
	}
	putchar('\n');
	return (0);
}


