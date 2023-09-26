#include "lists.h"

/**
 * free_listint - frees a linked list
 *
 * @head: pointer to the 1st node
 *
 * Return: nothing
 */

void free_listint(listint_t *head)
{
	listint_t *node;

	while (head)
	{
		node = head->next;
		free(head);
		head = node;
	}
}
