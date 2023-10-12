#include "lists.h"

size_t print_dlistint(const dlistint_t *h)
{
    const dlistint_t *tmp;
    size_t count = 0;

    tmp = h;
    while(tmp)
    {
        printf("%d\n", tmp->n);
        tmp = tmp->next;
        count++;
    }
    return (count);
}
