#include <stdio.h>
#include "lists.h"

/**
 * list_len - returns # of elements in linked list
 * @h: pointer to the list
 * Return: number of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t num_elements = 0;

	for (num_elements = 0; h != NULL; num_elements++)
	{
		h = h->next;
	}
	return (num_elements);
}
