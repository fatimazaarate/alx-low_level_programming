#include "lists.h"

/**
* delete_nodeint_at_index - for being rude
* @head: the master of them
* @index: the leader
* Return: value of delted node
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *t = *head;
	listint_t *prev = NULL;
	unsigned int count = 0;

	if (*head == NULL)
		return (-1);

	if (!index)
	{
		*head = (*head)->next;
		free(t);
		return (1);
	}
	while (t != NULL && count < index)
	{
		prev = t;
		t = t->next;
		count++;
	}
	if (t == NULL)
	return (-1);

	prev->next = t->next;
	free(t);

	return (1);
}
