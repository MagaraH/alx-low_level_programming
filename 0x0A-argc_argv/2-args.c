#include <stdio.h>
#include "main.h"
/**
 * main - a program that prints all arguments it receives
 *
 *  @argc: number of arguments
 *  @argv: array of arguments
 *  Return: (0)
 */
int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	(void)argv;
	return (0);
}
