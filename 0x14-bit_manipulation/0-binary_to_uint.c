#include "main.h"
#include <stddef.h>
/**
 * binary_to_uint - converts binary to unsigned int
 * @b: string  with binary
 * Return: int
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int decimal_value = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		decimal_value = (decimal_value << 1) | (b[i] - '0');
	}
	return (decimal_value);
}
