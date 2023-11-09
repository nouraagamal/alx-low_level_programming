#include "lists.h"

/**
 * free_dlistint - list
 * @head: list
 *
 * Return: list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *x = head;

	while (x)
	{
		dlistint_t *next = x->next;
		free(x);
		x = next;
	}
}
