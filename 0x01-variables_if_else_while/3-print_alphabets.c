#include <stdio.h>
/**
 * main - contains all program code
 *
 * Description: Write a program that prints the alphabet
 *  in lowercase,
 *  and then in uppercase, followed by a new line.
 *  You can only use putchar three times in your code
 *  Return: (0)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; ++c)
		putchar(c);
	for (c = 'A'; c <= 'Z'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
