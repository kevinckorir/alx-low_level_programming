#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memry using malloc
 * @b: number of bytes
 * Return: Nothing
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
	{
	exit(98);
	}
	return (p);
}
