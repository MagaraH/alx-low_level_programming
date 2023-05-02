#include "lists.h"
/**
 * sum_listint - function that returns the sum
 * of all the data (n) of a listint_t linked list
 *
 * @head: pointer to head node of list
 * Return: sum/0
 */
int sum_listint(listint_t *head)
{
	listint_t *current = head;
	unsigned int sum = 0;

	while (current)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
