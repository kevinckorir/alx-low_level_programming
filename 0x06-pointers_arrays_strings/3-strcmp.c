#include <stdio.h>

/**
* _strcmp - compares two strings
*@s1: pointer to first string
*@s2: pointer to second string
*Return: int
*/
int _strcmp(char *s1, char *s2)
{
	int compare = 0;

	while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	compare = (*s1 == *s2) ? 0 : (*s1 > *s2) ? 15 : -15;
	return (compare);
}
