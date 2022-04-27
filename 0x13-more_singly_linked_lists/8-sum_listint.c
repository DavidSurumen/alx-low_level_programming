#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - sums all the data in a linked list
 * @head: list
 *
 * Return: sum of all the data, or 0 if empty
 */
int sum_listint(listint_t *head)
{
	listint_t *tmp;
	int sum = 0;

	if (!head)
		return (0);

	tmp = head;
	while (tmp)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
