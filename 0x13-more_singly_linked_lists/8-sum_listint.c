#include "lists.h"
/**
 * sum_listint - sum all data of a list
 * @head: pointer to the list
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
