#include "lists.h"

/**
 * add_node_end - adds a new node at the end
 *
 * @head: head of the linked list.
 * @str: string to store in the list.
 *
 * Return: address of the head.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *node;
	size_t length = 0;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	while (str[length])
		length++;
	new->len = length;
	new->next = NULL;
	node = *head;
	if (node == NULL)
		*head = new;
	else
	{
		while (node->next != NULL)
		node = node->next;
		node->next = new;
	}
	return (*head);
}
