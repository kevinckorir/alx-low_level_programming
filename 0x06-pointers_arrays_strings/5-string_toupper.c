#include "main.h"

/**
 * string_toupper - changes all lowercase letters to uppercase
 * @str: string being checked
 * Return: uppercase character
 *
 */
char *string_toupper(char *str)
{
	char *p = str;

	while (*p != '\0')
	{
		if (*p >= 'a' && *p <= 'z')
		{
			*p -= ('a' - 'A');
		}
		p++;
	}
	return (str);
}
