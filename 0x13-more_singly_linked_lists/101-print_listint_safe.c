#include "lists.h"

/**
 * print_listint_safe - function that prints a linked list with a loop safely.
 *
 * @head: pointer to the 1st node
 *
 * Return: new node
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *temp = NULL;
	const listint_t *l = NULL;
	size_t c = 0, new;

	temp = head;
	while (temp)
	{
		printf("[%p] %d\n", (void *)temp, temp->n);
		c++;
		temp = temp->next;
		l = head;
		new = 0;
		while (new < c)
		{
			if (temp == l)
			{
				printf("-> [%p] %d\n", (void *)temp, temp->n);
				return (c);
			}
			l = l->next;
			new++;
		}
		if (!head)
			exit(98);
	}
	return (c);
}
