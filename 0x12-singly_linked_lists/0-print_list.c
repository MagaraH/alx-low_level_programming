#include <stdio.h>
#include "lists.h"
/**
 * print_list - function that prints all the elements of a list_t list
 *
 * @h: pointer to head node of list_t
 * Return: Number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	for (; h != NULL; h = h->next, count++)
	{
		if ( h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
	}
	return count;
}
