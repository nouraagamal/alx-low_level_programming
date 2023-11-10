#include "lists.h"

/**
 * free_dlistint - list
 * @head: pointer to first node
 * Return: nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *x = head;
	while (x != NULL)
	{
		dlistint_t *next = x->next;
		free(x);
		x = next;
	}
}
