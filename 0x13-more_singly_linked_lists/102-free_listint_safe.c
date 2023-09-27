#include "lists.h"

size_t free_listint_safe(listint_t **h)
{
    size_t len = 0;
    listint_t *temp;

    if (!h || !*h)
        return 0;

    while (*h)
    {
        temp = (*h)->next;
        free(*h);
        *h = temp;
        len++;
    }

    *h = NULL;

    return len;
}
