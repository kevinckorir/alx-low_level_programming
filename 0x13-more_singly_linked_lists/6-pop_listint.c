#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a list
 * @head: takes a pointer to a pointer to the head
 * Return: head nodes data , 0 if empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (*head == NULL)
	{
		return (0);
	}
	temp = *head;
	*head = (*head)->next;
	n = (*head)->n;
	free(temp);
	return (n);
}

