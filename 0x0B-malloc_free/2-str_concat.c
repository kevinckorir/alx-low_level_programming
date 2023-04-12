#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * str_concat - concatenate two strings
 * @s1: first string
 * @s2: second string
 * Return: Concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	size_t length1 = strlen(s1);
	size_t length2 = strlen(s2);
	char *result = (char *) malloc(length1 + length2 + 1);

	if (result == NULL)
	{
		return (NULL);
	}
	if (s1 == NULL)
	{ 
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	strncpy(result, s1, length1);
	strncpy(result + length1, s2, length2);
	result[length1 + length2] = '\0';
	return (result);
}
