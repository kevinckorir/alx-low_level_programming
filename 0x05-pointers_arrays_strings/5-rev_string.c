#include "main.h"
#include <string.h>

/**
 * rev_string - reverses a string
 * @s: takes a string pointer as input
 * Return: Nothing
 */
void rev_string(char *s)
{
	int len = strlen(s);
	int i;

	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
}
