#include <stdio.h>
/**
 * main - contains all code for this program
 *
 * Description: Write a program that prints all
 *  possible different combinations of two digits.
 *  Numbers must be separated by ,, followed by a space
 *  01 and 10 are considered the same combination of the two digits 0 and 1
 *  Print only the smallest combination of two digits
 *  Numbers should be printed in ascending order, with two digits
 *  You can only use the putchar function
 *
 *  Return: (0)
 */
int main(void)
{
	int i;
	int j;

	for (i = 0 ; i < 10 ; i++)
	{
		for (j = 1 ; j < 10 ; j++)
		{
			if (i < j && i != j)
			{
				putchar(i + '0');
				putchar(j + '0');
				if (i + j != 17)
				{
					putchar (',');
					putchar(' ');
				}
			}
		}

	}
	putchar('\n');
	return (0);
}
