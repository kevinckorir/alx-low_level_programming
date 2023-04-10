#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: destination of the two strings
 * @src: source of the second string
 * @n: bytes allocated to the dest
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	 char *dest_end = dest;
	 int i = 0;

	 while (*dest_end != '\0')
	 {
		 dest_end++;
	 }
	 while (*src != '\0' && i < n)
	 {
		*dest_end = *src;
		dest_end++;
		src++;
		i++;
	 }
	 *dest_end = '\0';
	 return (dest);
}
