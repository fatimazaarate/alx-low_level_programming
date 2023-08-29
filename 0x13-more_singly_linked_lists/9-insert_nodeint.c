#include "lists.h"

/**
* insert_nodeint_at_index - count number of elements
* @head: the way of the sword
* @idx: git push
* @n: the cannons
* Return: number of soliders
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp, *newnode, *prev;
	unsigned int count = 0, i = 1;

	tmp = *head;
	while (tmp)
	{
		tmp = tmp->next;
		count++;
	}

	if (idx > count)
		return (NULL);

	newnode = malloc(sizeof(listint_t));
	if (!newnode)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}
	tmp = *head;
	while (i < idx + 1)
	{
		prev = tmp;
		tmp = tmp->next;
		i++;
	}

	prev->next = newnode;
	newnode->next = tmp;

	return (newnode);
}
