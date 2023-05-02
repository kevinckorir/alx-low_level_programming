#include "lists.h"
#include <stdlib.h>
/**
 * get_nodeint_at_index - get the node at index
 * @head: pointer to the first node
 * @index: index of node to be returned
 * Return: node at the index or NULL if not available
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count;
	listint_t *current;


	if (head == NULL)
		return (NULL);
	current = head;
	for (count = 0; count < index && current != NULL; count++)
	{
		current = current->next;
	}
	if (current == NULL)
		return (NULL);
	return (current);
}
