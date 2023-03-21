#include "main.h"

/**
 * _isalpha - Check if character is an alphabet
 * @c: character to be checked
 * Return: 1 if the character is an alphabet and 0 else
 */
int _isalpha(int c)
{
	if ((c <= 97 && c >= 122) || (c <= 65 && c >= 90))
	{
	return (1);
	}
	return (0);

}
