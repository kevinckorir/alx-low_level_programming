#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates n bytes of a string to another string
 *
 * @s1: string to append
 * @s2: string to concatenate
 * @n: number of bytes from s2 to concatenate to s1
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i = 0, j = 0, s1_length = 0, s2_length = 0;

	if (s1 != NULL)
		s1_length = strlen(s1);

	if (s2 != NULL)
	s2_length = strlen(s2);

	s = malloc(sizeof(char) * (s1_length + n + 1));
	if (s == NULL)
	return (NULL);

	for (i = 0; i < s1_length; i++)
	s[i] = s1[i];

	for (j = 0; j < n && j < s2_length; j++)
	s[i + j] = s2[j];

	s[i + j] = '\0';
	return (s);
}

