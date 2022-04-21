#include "lists.h"
#include <string.h>

/**
 * add_node - adds a new node at the beginning of a list
 *
 * @str: string value to store in new node
 * @head: double pointer to head node
 *
 * Description: 'str' needs to be duplicated
 * allowed to use strdup
 *
 * Return: addresss of new element, NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = *head;

	*head = new;

	return (new);
}
