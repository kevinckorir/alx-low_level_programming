#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - add node at start of list
 * @head: pointer to the pointer to head
 * @n: new data in node
 * Return: address of new element or NULL if failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = *head;
	*head = newnode;

	return (newnode);
}




