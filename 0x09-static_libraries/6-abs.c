#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: takes an integer as input
 * Return: Returns the absolute value of the integer
 */
int _abs(int n)
{
	if (n < 0)
	{
		n = -n;
	}
	return (n);
}
