#include "lists.h"

/**
 * list_len - returns number of elements in a linked list
 *
 * @h: list node
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	const list_t *tmp;
	size_t n = 0;

	tmp = h;

	while(tmp)
	{
		n++;
		tmp = tmp->next;
	}
	return (n);
}
