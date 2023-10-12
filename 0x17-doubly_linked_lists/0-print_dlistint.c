#include "lists.h"

/**
 * print_dlistint - prints all elements of a dlistint_t list
 * @h: list head
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t counter = 0;
	int i;

	for (i = 0; h != NULL; i++)
	{
		printf("%d\n", h->n);
		counter++;
		h = h->next;
	}
	return (counter);
}
