#include "lists.h"

/**
 * list_len - print elements of a list
 *
 * @h:  number of elements in a linked list
 *
 * Return: number of nodes
*/

size_t list_len(const list_t *h)
{
	size_t i;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
