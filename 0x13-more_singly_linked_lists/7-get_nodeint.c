#include "lists.h"

/**
 * *get_nodeint_at_index -  returns the nth node of a listint_t linked list
 * @head: pointer to the listint_t list
 * @index: index of the node
 * Return: the n node or null if it does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int i = 0;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}
	return (temp ? temp : NULL);
}
