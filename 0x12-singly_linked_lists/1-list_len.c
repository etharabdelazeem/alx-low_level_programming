#include "lists.h"

/**
 * list_len - returns number of elements in a list
 * @h: the list
 * Return: number of elements in the linked list.
*/
size_t list_len(const list_t *h)
{
    size_t count = 0;

    while(h != NULL)
    {
        h = h->next;
        count++;
    }
    return(count);
}