#include "lists.h"
/**
 * add_nodeint_end - function that adds a new node
 * at the end of a listint_t list
 *
 * @head: pointer to pointer of head node
 * @n: input arguments
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode;
	listint_t *lastNode = *head;

	/* 1. allocate memory for node */
	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	/* 2. put in the data  */
	newNode->n = n;
	/* 4. If the Linked List is empty, then make the new node as head */
	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}
	/* 5. Else traverse till the last node */
	for (; lastNode->next != NULL; lastNode = lastNode->next)
	{
		/* empty */
	}
	lastNode->next = newNode;
	return (newNode);
}
