#include "main.h"
#include <stdlib.h>
/**
* create_array - creates an array of characters
* @c: input param
* @size: input param size
* Return: character or string
*/

char *create_array(unsigned int size, char c)
{
	char *a = (char *)malloc(size * sizeof(char));
	unsigned int j;

	if (size == 0)
	{
	return (NULL);
	}
	if (a == NULL)
	{
	return (NULL);
	}

	for (j = 0; j < size; j++)
	{
	a[j] = c;
	}

	return (a);
}

