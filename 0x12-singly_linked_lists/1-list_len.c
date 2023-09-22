#include "lists.h"

/**
 * list_len - print elements of a list
 *
 * @h: number of elements in a linked list
 *
 * Return: number of nodes
*/

size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
