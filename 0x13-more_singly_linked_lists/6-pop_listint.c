#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: head of a linked list.
 *
 * Return: head node's data.
 */
int pop_listint(listint_t **head)
{
	int znode;
	listint_t *z;
	listint_t *curr;

	if (*head == NULL)
		return (0);

	curr = *head;

	znode = curr->n;

	z = curr->next;

	free(curr);

	*head = z;

	return (znode);
}
