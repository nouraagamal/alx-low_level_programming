#include "lists.h"

/**
 * add_node - add new node at the beginning
 *
 * @head: first node
 * @str: string
 *
 * Return: address of the new element at the beginning
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int len;

	new = malloc(sizeof(list_t));
	for (len = 0; str[len]; len++);
	if (!head || !new)
		return (NULL);
	while (str)
	{
		new->str = strdup(str);
		if (!new->str)
		{
			free(new);
			return (NULL);
		}
		new->len = len;
	}
	new->next = *head;
	*head = new;
	return (new);
}
