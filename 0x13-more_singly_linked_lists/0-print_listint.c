#include "lists.h"
/**
 * print_listint - function that prints all the elements of a listint_t list.
 *
 * @h: Pointer to head node of list
 * Return: 0
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	for (; h != NULL; h = h->next, count++)
	{
		printf("%d\n", h->n);
	}
	return (count);
}
