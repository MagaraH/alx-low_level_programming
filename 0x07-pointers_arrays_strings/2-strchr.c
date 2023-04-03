#include "main.h"
/**
 * *_strchr - function that locates a character in a string.
 *
 * @s: string
 * @c: character to be located
 * Return: c
 */
char *_strchr(char *s, char c)
{
	int x;

	for (x = 0 ; s[x] >= '\0' ; x++)
	{
		if (s[x] == c)
			return (&s[i]);
	}
	return (0);
}
