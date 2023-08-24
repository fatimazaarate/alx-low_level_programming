#include "lists.h"
/**
* add_node_end - Adds a new node at the end
*                of a list_t list.
* @head: A pointer the head of the list_t list.
* @str: The string to be added to the list_t list.
*
* Return: If the function fails - NULL.
*         Otherwise - the address of the new element.
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *tmp = *head;
	unsigned int length = 0;

	while (str[length])
		length++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = length;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (tmp->next)
		tmp = tmp->next;

	tmp->next = new;

	return (new);
}
