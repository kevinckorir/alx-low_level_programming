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
		if (isspace(str[k]) || (str[k] == 9 || str[k] == 10 || str[k] == 44 || str[k] == 46 || str[k] == 59 || str[k] == 33 || str[k] == 63 || str[k] == 34 || str[k] == 40 || str[k] == 41 || str[k] == 123 || str[k] == 125))

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
