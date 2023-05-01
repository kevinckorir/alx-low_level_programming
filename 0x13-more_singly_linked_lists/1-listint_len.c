#include <stdio.h>
#include "lists.h"

/**
 * listint_len - count number of elements in a list
 * @h: pointer to the head of list
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}

