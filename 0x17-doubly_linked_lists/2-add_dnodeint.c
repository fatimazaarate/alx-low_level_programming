#include "lists.h"

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
    dlistint_t *new_node = NULL;

    new_node = malloc(sizeof(dlistint_t));

    new_node->n = n;
    new_node->next = NULL;
    new_node->prev = NULL;
    new_node->next = *head;

    *head = new_node;
    
    return (new_node);
}