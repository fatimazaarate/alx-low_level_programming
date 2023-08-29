#include "lists.h"

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int nb;

	if (!(*head))
		return (0);

	tmp = (*head)->next;

	free(*head);

	*head = tmp;
	nb = (*head)->n;
	return (nb);
}
