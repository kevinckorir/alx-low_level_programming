#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds node to linked list
 * @head: double pointer to list
 * @str: new string to add
 * Return: the address of the new element or NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	size_t len;
	list_t *new;

	if (str == NULL)
		return (NULL);


	len = strlen(str);
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = len;
	new->next = *head;
	*head = new;

	return (new);
}
