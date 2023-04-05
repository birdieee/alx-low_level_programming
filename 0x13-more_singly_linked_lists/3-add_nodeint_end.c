#include "lists.h"

/**
 * add_nodeint_end - a function that adds a new node at the end of a list.
 * @h: head of a linked list.
 * @n: number will be added
 * Return: the address the new element, or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *last = *head;
	listint_t *add_new_node = malloc(sizeof(listint_t));

	if (add_new_node == NULL)
	{
		return (NULL);
	}

	add_new_node->n = n;
	add_new_node->next = NULL;

	if (last == NULL)
	{
		*head = add_new_node;
	}
	else
	{
		while (last->next != NULL)
		{
			last = last->next;
		}

		last->next = add_new_node;
	}

	return (add_new_node);
}
