#include "lists.h"

/**
 * free_listint2 - a function that frees a listint_t linked  list.
 * @head: head of the  linked list
 *
 * The function sets the head to NULL
 */
void free_listint2(listint_t **head)
{
	listint_t *t;

	if (head == NULL)
	{
		return;
	}

	while (*head != NULL)
	{
		t = *head;
		*head = (*head)->next;
		free(t);
	}
}
