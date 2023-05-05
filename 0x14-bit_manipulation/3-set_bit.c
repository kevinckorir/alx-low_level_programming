#include "main.h"

/**
 * set_bit - sets the value of a bit at a given index
 * @n: a pointer to the number to set the bit
 * @index: the index of the bit to set
 * Return: 1 if succesful, or -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}

