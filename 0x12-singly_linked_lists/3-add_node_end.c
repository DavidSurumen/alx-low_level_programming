#include "lists.h"
#include <string.h>

/**
 * add_node_end - adds new node at the end of a list
 *
 * @head: double pointer to the list head
 * @str: new string to add in the node
 * Return: address of new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp;
	unsigned int len = 0;

	new = malloc(sizeof(list_t));

	if(!new)
		return (NULL);
	
	
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}

	while(str[len])
		len++;

	new->len = length;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	temp = *head;
	while (temp->next)
		temp = temp->next;
	temp->next = temp;
	return (temp);
}
