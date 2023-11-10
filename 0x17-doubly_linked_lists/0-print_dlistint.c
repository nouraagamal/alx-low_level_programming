#include "lists.h"

/**
 * print_dlistint - function that prints the list.
 * @h: head first node of list
 * Return: size_t
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
