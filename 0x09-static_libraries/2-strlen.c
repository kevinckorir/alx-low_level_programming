#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: takes the strings pointer as parameter
 * Return: integer value == length of string
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
