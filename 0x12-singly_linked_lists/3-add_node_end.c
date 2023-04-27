#include "lists.h"
/**
 * add_node_end - function that adds a new node at the end of a list_t list
 *
 * @head: Pointer to a pointer to the head node
 * @str: string added to new node
 * Return: address of the new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *last_node;
	unsigned int len = 0;

	while (str[len])
		len++;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = NULL;

	if (!(*head))
	{
		/* If the list is empty, make the new node the head */
		*head = new_node;
	}
	else
	{
		/* Otherwise, traverse the list to find the last node */
		last_node = *head;
		while (last_node->next)
			last_node = last_node->next;

		/* Make the new node the next node of the current last node */
		last_node->next = new_node;
	}

	return (new_node);
}
