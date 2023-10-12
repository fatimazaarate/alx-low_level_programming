#include "lists.h"

/**
 * dlistint_len - prints all the elements of a dlistint_t list
 * @h: pointer to head of list
 *
 * Return: number of nodes in list
 */

size_t dlistint_len(const dlistint_t *h)
{
    const dlistint_t *tmp;
	size_t count = 0;

	tmp = h;
	while (tmp)
	{
		count++;
		tmp = tmp->next;
	}
	return (count);
}