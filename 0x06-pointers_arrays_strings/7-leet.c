#include "main.h"
#include <string.h>

/**
* leet - encode a string into 1337
* @str: takes a string
* Return: string encoded in 1337
*/
char *leet(char *str)
{
	char a[] = {'a', 'e', 'o', 't', 'l', 'A', 'E', 'O', 'T', 'L'};
	char b[] = {'4', '3', '0', '7', '1', '4', '3', '0', '7', '1'};
	int i, k;
	int str_len = strlen(str);

	for (i = 0; i < str_len ; i++)
	{
		for (k = 0; k < 10; k++)
		{
			if (str[i] == a[k])
			{
				str[i] = b[k];
				break;
			}
		}
	}
	return (str);
}
