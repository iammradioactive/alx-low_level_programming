#include "lists.h"
/**
 * add_nodeint - add a new node at the beginning of the list
 * @head: points to the address of the head of the list
 * @n: value to be assigned to new node
 * Return: address of new element or NULL if it fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
