#include "main.h"

/**
 * flip_bits - flips the bits
 * @n: the input parameter
 * @m: the target param
 *
 * Return: integer
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int exclusive;
	unsigned int num_bits;
	unsigned int i;

	num_bits = sizeof(unsigned long int) * 8;
	exclusive = n ^ m;
	for (i = num_bits - 1; i != (unsigned int)(-1); i--)
	{
		if ((exclusive & (1UL << i)) != 0)
		{
			count++;
		}

	}
	return (count);
}
