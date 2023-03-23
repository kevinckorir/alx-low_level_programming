#include "main.h"

/**
 * _isdigit - checks for a digit
 * @c: takes an ASCII character's integer value
 * Return: 1 if c is a digit and 0 if otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
	return (1);
	}
	return (0);
}
