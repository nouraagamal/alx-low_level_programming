#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning
 * @head: pointer
 * @n: const int
 * Return: new list
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	if (!head || !new_node)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	new_node->n = n;
	new_node->prev = NULL;
	if (*head != NULL)
	{
		new_node->next = (*head);
		(*head)->prev = new_node;
		(*head) = new_node;
	}
	else
	{
		(*head) = new_node;
		new_node->next = NULL;
	}
	return (new_node);
}
