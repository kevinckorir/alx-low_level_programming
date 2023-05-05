#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: pointer to a string of binary character
 * Return: converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int result = 0;
	/*int len;*/
	int num = 0;
	int temp, last_digit;
	int base;

	base = 1;
	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		num = num * 10 + (b[i] - 48);
	}
	temp = num;
	while (temp)
	{
		last_digit = temp % 10;
		if (last_digit == 1 || last_digit == 0)
		{
			temp = temp / 10;
			result += last_digit * base;
			base = base * 2;
		}
		else
			return (0);
	}
	return (result);
}
