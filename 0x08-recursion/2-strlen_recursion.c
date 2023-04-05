#include "main.h"
/**
 * _strlen_recursion - function that returns the length of a string.
 *
 * @s: string
 * Return: 0
 */
int _strlen_recursion(char *s)
{
	int s_length;

	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		s_length = _strlen_recursion(s + 1);
		return (1 + s_length);
	}
}
