#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees a list, sets head to NULL
 * @head: double pointer to listint_t list
 *
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}

	*head = NULL;
}
