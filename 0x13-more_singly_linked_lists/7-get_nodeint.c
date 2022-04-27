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
	unsigned int i = 0;

	if (!head)
		return (NULL);

	while(temp && i < index)
	{
		tmp = tmp->next;
		i++;
	}

	if (!tmp)
		return (NULL);
	return (tmp);
}
