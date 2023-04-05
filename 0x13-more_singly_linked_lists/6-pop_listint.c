#include "lists.h"

/**
 * pop_listint - The function deletes the head node of a listint_t linked
 * list, and returns the head node’s data (n).
 *
 * @head: singly linked list.
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	if (head == NULL)
		return (0);

	temp = *head;
	if (temp == NULL)
		return (0);

	n = temp->n;
	*head = temp->next;
	free(temp);
	return (n);
}
