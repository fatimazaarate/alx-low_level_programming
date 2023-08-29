#include "lists.h"

/**
* pop_listint - for being rude
* @head: the master of them
* Return: value of delted node
*/

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int nb;

	if (!(*head))
		return (0);

	nb = (*head)->n;
	tmp = (*head)->next;

	free(*head);

	*head = tmp;
	return (nb);
}
