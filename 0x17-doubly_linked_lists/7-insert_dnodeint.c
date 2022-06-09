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
	unsigned int i = 0;
	int done = 0;

	new = malloc(sizeof(dlistint_t));
	if (!new || !(*h))
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	tmp = *h;
	while (tmp)
	{
		if (i == idx)
		{
			new->prev = tmp->prev;
			tmp->prev->next = new;
			tmp->prev = new;
			new->next = tmp;

			done = 1;
			break;
		}
		i++;
		tmp = tmp->next;
	}
	if (done == 1)
		return (new);
	return (0);
}
