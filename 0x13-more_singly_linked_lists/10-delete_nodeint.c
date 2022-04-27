#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes a node at an index
 * @head: double pointer to list
 * @index: index of node to delete.
 *
 * Index starts at 0.
 *
 * Return: 1 is success, -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *del;
	listint_t *tmp;
	unsigned int i;

	if (!*head)
		return (-1);

	if (index == 0)
	{
		del = *head;
		*head = (*head)->next;
		free(del);
		return (1);
	}
	for (i = 0, tmp = *head; i <= index; i++, tmp = tmp->next)
	{
		if (!tmp->next)
			return (-1);
		if (i + 1 == index)
		{
			del = tmp->next;
			tmp->next = tmp->next->next;
			free(del);
		}
	}
	return (1);
}
