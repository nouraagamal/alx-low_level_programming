#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning of a linked list
 *
 * @head: pointer to the first node in the list
 * @n: value of new node (data in it)
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (!new || !head)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);
}
