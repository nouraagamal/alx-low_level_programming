#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list.
 *
 * @head: pointer to the first node
 *
 * Return: the data inside it or 0 if fails
 *
 */

int pop_listint(listint_t **head)
{
	listint_t *node;
	int data;

	if (!head || !*head)
		return (0);
	data = (*head)->n;
	node = *head;
	*head = (*head)->next;
	free(node);
	return (data);
}
