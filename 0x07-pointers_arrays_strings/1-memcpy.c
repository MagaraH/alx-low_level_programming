#include "main.h"
/**
 * *_memcpy - function that copies memory area.
 *
 * @dest: destination of copied bytes
 * @src: source of bytes
 * @n: function parameter
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int x = 0;
	int y = n;

	for ( ; x < y ; x++)
	{
		dest[x] = src[x];
		n--;
	}
	return (dest);
}
