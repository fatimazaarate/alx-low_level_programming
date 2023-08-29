#include "lists.h"

/**
* get_nodeint_at_index - count number of elements
* @head: head of the linked list
* @index: the index of the node
* Return:  returns the nth node of a listint_t linked list.
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp;

	while (head)
	{
		if (count == index)
			return (head);

		head = had->next;
		count++;
	}
	return (NULL);
}
