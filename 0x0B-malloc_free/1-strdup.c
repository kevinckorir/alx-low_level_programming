#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**
* _strdup - returns pointer
* @str: string input
* Return: string
*/

char *_strdup(char *str)
{
	size_t len = strlen(str);
	char *dup = (char *)malloc((len + 1) * sizeof(char));

	if (str == NULL)
	{
	return (NULL);
	}

	if (dup == NULL)
	{
	return (NULL);
	}

	strcpy(dup, str); /* Copy input string to duplicate string*/
	return (dup);
}

