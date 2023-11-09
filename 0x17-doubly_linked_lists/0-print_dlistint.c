#include "lists.h"

/**
 * print_dlistint - function that prints all the elements.
 * @h: head of first node of list
 * Return: size_t
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t i;

	while (h)
	{
		printf("%d\n", h->i);
		h = h->next;
		i++;
	}
	return (i);
}
