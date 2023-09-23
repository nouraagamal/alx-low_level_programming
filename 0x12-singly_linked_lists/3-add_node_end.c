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
	int l;

	new = malloc(sizeof(list_t));
	for (l = 0; str[l]; l++)
		;
	if (!head || !new)
		return (NULL);
	if (str)
	{
		new->str = strdup(str);
		if (!new->str)
		{
			free(new);
			return (NULL);
		}
		new->len = l;
	}
	if (node)
	{
		while (node->next)
			node = node->next;
		node->next = new;
	}
	else
		*head = new;
	return (new);
}
