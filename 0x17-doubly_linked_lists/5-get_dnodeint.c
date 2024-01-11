#include "lists.h"
/**
 * get_dnodeint_at_index - get the nth node of a list of index
 * @head: points to the head of the list
 * @index: position of node starting from 0
 * Return: the nth node of a dlistint_t linked list
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *current_node = head;

	for (i = 0; current_node != NULL && i < index; i++)
	{
		current_node = current_node->next;
	}

	if (current_node == NULL)
		return (NULL);

	return (current_node);
}
