#include "main.h"

/**
 * clear_bit - clears the value of a bit at a given index
 * @n: a pointer to the number to clear the bit
 * @index: the index of the bit to clear
 *
 * Return: 1 if successful, or -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	*n = (-(1UL << index) & *n);
	return (1);
}

