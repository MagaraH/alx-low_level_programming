#include "lists.h"
/**
 * add_nodeint - function that adds a new node
 * at the beginning of a listint_t list.
 *
 * @head: pointer to a pointer that points to head node of list
 * @n: input arguments
 * Return: pointer to new node/ null if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = *head;
	*head = newNode;
	return (newNode);
}
