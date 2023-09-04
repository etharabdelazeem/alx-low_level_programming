#include "lists.h"

/**
 * listint_len - returns the number of elements in list.
 *@h : list argument
 * Return : number of elements in h
 */
size_t listint_len(const listint_t *h)
{
	unsigned int nodes = 0;

	while(h != NULL)
	{
		h = h->next;
		nodes++;
	}
	return(nodes);
}
