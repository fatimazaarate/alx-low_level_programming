#include "lists.h"

/**
* get_nodeint_at_index - count number of elements
* @head: head of the linked list
* @index: the index of the node
* Return:  returns the nth node of a listint_t linked list.
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head)
	{
		if (count == index)
			return (head);

		head = head->next;
		count++;
	}
	return (NULL);
}
