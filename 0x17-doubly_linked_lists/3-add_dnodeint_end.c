#include "lists.h"
/**
 * add_dnodeint_end - add a new noode at the end of a list
 * @head: pointer to the head of the list
 * @n: integer value to store in new node
 * Return: address of new elemtn or NULL if it fails
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *last_node = *head;

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}

	while (last_node->next != NULL)
	{
		last_node = last_node->next;
	}

	new_node->prev = last_node;
	last_node->next = new_node;

	return (new_node);

}
