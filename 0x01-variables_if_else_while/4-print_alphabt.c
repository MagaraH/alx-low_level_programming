#include <stdio.h>
/**
 * main - This function contains all code for the program
 *
 * Description: Write a program that prints the alphabet in lowercase,
 *  followed by a new line.
 *  Print all the letters except q and e
 *  You can only use the putchar function
 *  You can only use putchar twice in your code
 *  Return: (0)
 */
int main(void)
{
	char x = 'a';

	while (x <= 'z')
	{
		if (x != 'q' && x != 'e')
		{
			putchar(x);
		}
		x++;
	}
	putchar('\n');
	return (0);
}
