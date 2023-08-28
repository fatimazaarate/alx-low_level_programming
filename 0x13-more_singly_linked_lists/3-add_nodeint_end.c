#include "lists.h"
/**
* add_nodeint_end - adds a new node at the end of a listint_t list.
* @head: pointer to the head of the node
* @n: integer element
*
* Return: the address of the new element
*/

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
	else
	{
		while (tmp->next)
		{
			tmp = tmp->next;
		}

	tmp->next = newnode;
	}

	return (newnode);
}
