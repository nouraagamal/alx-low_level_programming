#include "lists.h"

/**
 * get_dnodeint_at_index - to get element in a given index
 * @head: pointer to first node
 * @index: index of the reqyired node
 * Return: value
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t x;

	for (x = 0; head != NULL; x++)
	{
		if (x == index)
			return (head);
		head = head->next;
	}
	return (NULL);
}
