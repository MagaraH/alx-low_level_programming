#include "main.h"
/**
 * _strpbrk - function that searches a string for any of a set of bytes.
 * 
 * @s: pointer to byte
 * @accept: string
 * Return: s
 */
char *_strpbrk(char *s, char *accept)
{
	int x;

	for (; *s ; s++)
	{
		for (x = 0 ; accept[x] ; x++)
		{
			if (*s == accept[x])
			{
				return (s);
			}
		}
	}
	return ('\0');
}
