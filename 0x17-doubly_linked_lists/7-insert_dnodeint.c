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
			if (tmp->prev == NULL && tmp->next != NULL)
			{
				tmp->prev = new;
				new->next = tmp;
				*h = new;
			}
			else if (tmp->prev && tmp->next == NULL)
			{
				tmp->next = new;
				new->prev = tmp;
			}
			else
			{
				new->prev = tmp->prev;
				tmp->prev->next = new;
				tmp->prev = new;
				new->next = tmp;
			}
			return (new);
		}
		i++;
		tmp = tmp->next;
	}
	return (NULL);
}
