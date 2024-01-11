#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at a given index in a list
 * @head: A pointer to the head of the list
 * @index: The index of the node to be deleted, starting from 0
 * Return: 1 if it succeeded, -1 if it fails
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *current_node, *temp;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;

		if (*head != NULL)
			(*head)->prev = NULL;

		free(temp);
		return (1);
	}


	current_node = *head;

	for (i = 0; current_node != NULL && i < index; i++)
	{
		current_node = current_node->next;
	}

	if (current_node == NULL)
		return (-1);


	current_node->prev->next = current_node->next;

	if (current_node->next != NULL)
	{

		current_node->next->prev = current_node->prev;
	}

	free(current_node);

	return (1);
}

