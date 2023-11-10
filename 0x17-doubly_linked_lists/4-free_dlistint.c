#include "lists.h"

/**
 * free_dlistint - list
 * @head: pointer to first node
 * Return: nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *x;

	while (head != NULL)
	{
		x = head;
		head = head->next;
		free(x);
	}
}
