#include "main.h"
/**
 *_islower - A function that checks for lowercase character
 *
 * Description: Write a function that checks for lowercase character.
 *@c: parameter to be printed
 *Return: 1 if its a lowercase
 *else return 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
