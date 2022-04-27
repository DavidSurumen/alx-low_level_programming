#include "lists.h"

/**
 * get_nodeint_at_index - gets the nth node of a linked list
 * @head: list
 * @index: index of the node, starting at 0
 *
 * Return: nth node, or NULL if node doesn't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp;
	unsigned int i;

	if (!head)
		return (NULL);

	for (i = 0, tmp = head; i < index; i++, tmp = tmp->next)
		;

	if (!tmp)
		return (NULL);
	return (tmp);
}
