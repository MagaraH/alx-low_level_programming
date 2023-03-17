#include <stdio.h>
/**
 * main - cintains code for this program
 *
 * Description: this code is a game
 * it uses the function putchar to print alphabeths
 * in lower case
 * it use while loop to go through each lower case letter
 * Return: (0)
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
		;
	}
	putchar('\n');
	return (0);
}

