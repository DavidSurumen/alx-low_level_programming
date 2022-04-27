#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts a new node at a
 * given position.
 *
 * @head: double pointer to the list
 * @idx: index of the list where the new node should be added.
 * @n: value to store in the newly created node
 *
 * Description:
 * Index starts at 0.
 * If it is not possible to add the new node at index 'idx',
 * do not add the new node and return NULL.
 *
 * Return: address of new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *tmp;
	unsigned int i;

	if (!head)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new = (*head)->next;
		*head = new;
	}
	else
	{
		for (i = 0, tmp = *head; i < idx; i++, tmp = tmp->next)
		{
			if (!tmp)
				return (NULL);
			if (i + 1 == idx && (!tmp->next))
			{
				tmp->next = new;
				break;
			}
			if (i + 1 == idx)
			{
				new->next = tmp->next;
				tmp->next = new;
			}
		}		
	}
	return (new);
}
