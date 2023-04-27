#include <stdio.h>
#include "lists.h"
/**
 * list_len - function that returns the number
 * of elements in a linked list_t list
 *
 * @h: pointer to the first node
 * Return: count of elements
 */
size_t list_len(const list_t *h)
{
	size_t count;

	for (count = 0 ; h != NULL ; h = h->next, count++)
	{
		/* return count */
	}
	return (count);
}
