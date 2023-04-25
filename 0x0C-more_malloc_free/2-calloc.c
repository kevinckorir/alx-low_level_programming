#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - allocate memory using malloc
 * @nmemb: param
 * @size: size allocated
 * Return: Nothing
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{

	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(size * nmemb);
	if (p == NULL)
		return (NULL);
	memset(p, 0, nmemb * size);
	return (p);

}

