#include "lists.h"

/**
* print_dlistint - prints all the elements of a dlistint_t list
* @h: pointer to head of list
*
* Return: number of nodes in list
*/

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *tmp;
	size_t count = 0;

	tmp = h;
	while(tmp)
	{
		printf("%d\n", tmp->n);
		count++;
		tmp = tmp->next;
	}
	return (count);
}