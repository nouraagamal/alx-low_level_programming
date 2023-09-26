#include "lists.h"

/**
 * sum_listint - calculates the sum of all the data in a linked list
 *
 * @head: pointer to the first node
 * 
 * Return: sum of element datas
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *node = head;

	while (node)
	{
		sum += node->n;
		node = node->next;
	}
	return (sum);
}
