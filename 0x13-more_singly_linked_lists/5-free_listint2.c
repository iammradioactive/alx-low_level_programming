#include "lists.h"
/**
 * free_listint2 - free list and set the head to null
 * @head: double pointer to the head of the list
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (heaad == NULL)
		return;

	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}

	*temp = NULL;
}
