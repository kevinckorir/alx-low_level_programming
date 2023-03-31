#include "main.h"
#include <ctype.h>

/**
 * cap_string - capitalize all words of a string
 * @str: str to be capitalized
 * Return: capitalized str
 */
char *cap_string(char *str)
{
	int cap_following_char = 1;
	int k;

	for (k = 0; str[k] != '\0'; k++)
	{
		if (isspace(str[k]) /*|| ispunct(str[k])*/)
		{
			cap_following_char = 1;
		}
		else if (cap_following_char)
		{
			str[k] = toupper(str[k]);
			cap_following_char = 0;
		}
	}
	return (str);
}
