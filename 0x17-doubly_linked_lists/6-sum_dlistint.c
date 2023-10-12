#include "lists.h"
/**
 * sum_dlistint - sums all the data (n) of a doubly linked list
 * @head: pointer to head node of list
 *
 * Return: sum of all data (n) in list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *tmp = head;

	while (tmp != NULL)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
