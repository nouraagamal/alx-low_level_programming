#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a linked list at a certain index
 *
 * @head: pointer to the first node
 * @index: index of the node to delete
 *
 * Return: 1 (Success), or -1 (Fail)
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node = *head;
	listint_t *current = NULL;
	size_t i = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(node);
		return (1);
	}
	while (i < index - 1)
	{
		if (!node || !(node->next))
			return (-1);
		node = node->next;
		i++;
	}
	current = node->next;
	node->next = current->next;
	free(current);
	return (1);
}
