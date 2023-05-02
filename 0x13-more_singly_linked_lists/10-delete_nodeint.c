#include <stdlib.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - deletes node at certain index
 * @head: pointer to the head
 * @index: index of node to be deleted
 * Return: integer
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current;
	listint_t *previous;

	current = *head;
	previous = *head;
	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = current->next;
		free(current);
		current = NULL;
		return (1);
	}
	else
	{
		while (index != 0)
		{
			previous = current;
			current = current->next;
			index--;
		}
		previous->next = current->next;
		free(current);
		current = NULL;
		return (1);
	}
}
