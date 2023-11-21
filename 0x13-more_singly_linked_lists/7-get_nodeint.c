#include "lists.h"
/**
  * get_nodeint_at_index - retrieve node at an index
  * @head: pointer to the head of the list
  * @index: index of node
  * Return: pointer to the retrieved node
  */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int j = 0;

	for (j = 0; j < index; j++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
