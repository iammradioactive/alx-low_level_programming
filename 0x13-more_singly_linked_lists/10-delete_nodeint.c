#include "lists.h"
#include <stdio.h>
/**
 * delete_nodeint_at_index - delete node at the index of a list
 * @head: double pointer to head of the list
 * @index: index of the node to be deleted
 * Return: 1 if it succeeds, -1 if it fails
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *temp1;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	temp = *head;

	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}

	while (temp != NULL && i < index - 1)
	{
		temp = temp->next;
		i++;
	}

	if (temp == NULL || temp->next == NULL)
		return (-1);

	temp1 = temp->next;
	temp->next = temp1->next;
	free(temp1);

	return (1);
}
