#include <stdio.h>
/**
 * main - Contains all code for the program
 *
 * Description: Write a program that prints all possible combinations
 * of single-digit numbers.
 * Numbers must be separated by ,, followed by a space
 * Numbers should be printed in ascending order
 * You can only use the putchar function
 * You can only use putchar four times in your code
 * Return: (0)
 */
int main(void)
{
	int n = 0;

	while (n < 10)
	{
		putchar('0' + n);
		if (n == 9)
		{
			putchar('\n');
			break;
		}
		else
		{
			putchar(44);
			putchar(' ');
			n++;
		}
	}

	return (0);
}
