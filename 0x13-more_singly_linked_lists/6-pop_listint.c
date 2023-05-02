#include "lists.h"
/**
 * pop_listint - function that deletes head node of a list
 *
 * @head: pointer to pointer of head node
 * Return: head nodes data
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int node_data;

	if (*head == NULL || head == NULL)
		return (0);
	temp = *head;
	*head = temp->next;
	node_data = temp->n;
	free(temp);
	return (node_data);
}
