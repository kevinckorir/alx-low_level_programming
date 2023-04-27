#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end -adds a new node at end
 * @head: pointer to list
 * @str: string to be added at the end of the node
 * Return: address of the new element, or NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp = *head;
	size_t len;

	len = strlen(str);
	new = malloc(sizeof(list_t));
	if (!new)
	{
		return (NULL);
	}
	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (temp->next)
		temp = temp->next;
	temp->next = new;
	return (new);
}
