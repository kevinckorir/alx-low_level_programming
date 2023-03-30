#include "main.h"

/**
 * _strncpy - copy string
 * @dest: destination where the string is copied to
 * @src: source of the string being copied
 * @n: max number of characters to copy
 * Return: pointer to the dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *start = dest;

	
	while (*src && n--)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}
