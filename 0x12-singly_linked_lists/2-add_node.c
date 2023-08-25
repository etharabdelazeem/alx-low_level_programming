#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list
 * @head: pointer to node
 * @str: value of node to be added
 * Return: the address of the new element, or NULL if it failed
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	size_t length;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	};
	new_node->str = strdup(str);
	length = strlen(str);
	new_node->len = length;
	new_node->next = *head;
	*head = new_node;
	return (*head);
}
