#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a listint_t list
 * @head: pointer to list
 *
 * Return: head node's data, or 0 if empty
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *tmp;

	if (!*head)
		return (0);

	tmp = *head;
	data = tmp->n;
	*head = (*head)->next;

	free(tmp);

	return (data);
}
