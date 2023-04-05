#include "lists.h"

/**
 * add_nodeint - a function that adds a new node at the beginning of a
 * listint_t list.
 * @h: head of the linked list 
 * @n: add new node
 *
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *add_new_node = malloc(sizeof(listint_t));

	if (add_new_node == NULL)
	{
		return (NULL);
	}

	add_new_node->n = n;
	add_new_node->next = *head;
	*head = add_new_node;

	return (add_new_node);
}
