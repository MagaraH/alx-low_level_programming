#include <string.h>
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - function that allocates memory for an array, using malloc.
 *
 * @nmemb: number of elements in array
 * @size: size of elements
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *n;
	unsigned int x;

	if (nmemb == 0 || size == 0)
		return (NULL);
	n = malloc(nmemb * size);
	if (n == NULL)
		return (NULL);
	for (x = 0 ; x < (nmemb * size) ; x++)
	{
		n[x] = '\0';
	}
	return (n);
}
