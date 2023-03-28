#include "main.h"
#include <string.h>

/**
 * puts_half - prints half of a string
 * @str: takes a string pointer as parameter
 * Return: Nothing
 */
void puts_half(char *str)
{
	int i;
	int len = strlen(str);
	int start_index = len % 2 == 0 ? len / 2 : (len - 1) / 2 + 1;

	for (i = start_index; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

