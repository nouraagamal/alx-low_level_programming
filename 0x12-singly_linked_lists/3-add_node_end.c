#include "lists.h"

/**
 * add_node_end - add new node at the end
 *
 * @head: input list
 * @str: string
 *
 * Return: ddress of the new element
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *node = *head;
	size_t length;

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
