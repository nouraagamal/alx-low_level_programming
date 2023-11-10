#include "lists.h"

/**
 * dlistint_len - function to return nomber of elements
 * @h: head
 * Return: i
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
