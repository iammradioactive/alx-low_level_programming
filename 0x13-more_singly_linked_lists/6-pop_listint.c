#include "lists.h"
/**
 * pop_listint - delete the head of a linked list
 * @head: double pointer to the head of the list
 * Return: node data of the head or 0 if the list is empty
 */

int pop_listint(listint_t **head)
{
	int data = 0;
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return (0);

	temp = *head;
	*head = (*head)->next;
	data = temp->n;
	free(temp);

	return (data);
}
