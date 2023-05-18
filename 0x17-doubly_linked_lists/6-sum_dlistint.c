#include "lists.h"

/**
 * sum_dlistint - program returns the sum of all the data
 * of a doubly linked list by Simbiat Lola.
 *
 * @head:the head of the list.
 * Return: sum of  all the data.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;

	sum = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			sum += head->n;
			head = head->next;
		}
	}

	return (sum);
}
