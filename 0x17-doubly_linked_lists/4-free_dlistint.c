#include "lists.h"

/**
 * free_dlistint - program frees a dlistint_t list
 * linked list by Simbiat Lola
 *
 * @head: head of the list.
 * Return: no return.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	if (head != NULL)
		while (head->prev != NULL)
			head = head->prev;

	while ((tmp = head) != NULL)
	{
		head = head->next;
		free(tmp);
	}
}
