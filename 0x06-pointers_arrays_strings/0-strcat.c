#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: the first string pointer
 * @src: the second string pointer
 * Return: a combination of both strings
 */
char *_strcat(char *dest, char *src)
{
	char *dest_end = dest;

	while (*dest_end != '\0')
	{
		dest_end++;
	}
	while (*src != '\0')
	{
		*dest_end = *src;
		dest_end++;
		src++;
	}
	*dest_end = '\0';
	return (dest);
}
