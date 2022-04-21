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
	char *copy = strdup(str);

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = copy;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		new->next = *head;
		*head = new;
	}

	return (new);
}
