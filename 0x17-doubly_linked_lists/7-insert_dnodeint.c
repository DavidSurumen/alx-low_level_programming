#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: double poiter to the doubly linked list
 * @idx: index of the list where the new node is to be added
 * @n: data to be stored in the new node
 *
 * Return: address of the new node, or NULL if the operation failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp;
	dlistint_t *new;
	
	if (!h)
		return (NULL);
	tmp = *h;

	while (idx != 0)
	{
		tmp = tmp->next;
		idx--;
		if (!tmp)
			return (NULL);
	}
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = tmp;
	new->prev = tmp->prev;
	if (tmp->prev != NULL)
		tmp->prev->next = new;

	return (new);
}
