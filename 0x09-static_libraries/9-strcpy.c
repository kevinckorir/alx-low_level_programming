#include "main.h"

/**
 * _strcpy - copy string
 * @dest: destination where the string is copied to
 * @src: source of the string being copied
 * Return: pointer to the dest
 */
char *_strcpy(char *dest, char *src)
{
	char *dest_origin = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest_origin);
}

