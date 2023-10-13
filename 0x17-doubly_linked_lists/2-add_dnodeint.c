#include "lists.h"

/**
 * add_dnodeint - add a new node at the beginning of the list
 * @head: head of the list
 * @n: value of new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (head == NULL)
	{
		return (NULL);
	}
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = *head;
	new->prev = NULL;
	*head = new;
	if (new->next != NULL)
		(new->next)->prev = new;
	return (new);
}
