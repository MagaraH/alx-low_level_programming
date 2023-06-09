#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - contains all program code
 *
 * Description: the output of the program should
 * if the last digit of n is greater than 5: the string and is greater than 5
 * if the last digit of n is 0: the string and is 0
 * if the last digit of n is less than 6 and not 0:
 * the string and is less than 6 and not 0
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of ");
	if (n % 10 > 5)
		printf("%d is %d and is greater than 5\n", n, n % 10);
	else if (n % 10 == 0)
		printf("%d is %d and is 0\n", n, n % 10);
	else
		printf("%d is %d and is less than 6 and not 0\n", n, n % 10);
	return (0);
}
