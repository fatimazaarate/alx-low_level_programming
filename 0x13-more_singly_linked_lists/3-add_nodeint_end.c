#include "lists.h"

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode, *tmp;

	newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;
	
	tmp = *head;

	if (*head == NULL)
		*head = newnode;

	while (tmp->next)
	{
		tmp = tmp->next;
	}

	tmp->next = newnode;

	return (newnode);
}