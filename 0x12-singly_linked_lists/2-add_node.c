#include "lists.h"
/**
 * add_node - function that adds a new node at the beginning of a list_t list
 *
 * @head: Pointer to a pointer to the head node
 * @str: String added to the new node.
 *
 * Return: Address of the new node
 **/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int len = 0;

	while (str[len])
		len++;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
