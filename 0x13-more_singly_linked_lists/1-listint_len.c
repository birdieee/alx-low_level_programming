#include "lists.h"

/**
 * listint_len - returns the number of elements in
 * a list.
 * @h: head of a linked list.
 *
 * Return: numbers of nodes.
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
