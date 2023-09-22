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
	int l;

	new = malloc(sizeof(list_t));
	for (l = 0; str[len]; l++);
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
	new->next = *head;
	*head = new;
	return (new);
}
