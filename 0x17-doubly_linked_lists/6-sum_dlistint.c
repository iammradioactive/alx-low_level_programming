#include "lists.h"
/**
 *  sum_dlistint - return the sum of all the data (n) of a list
 *  @head: pointer to the head of the list
 *  Return: sum of all data in the list or 0 if empty
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
