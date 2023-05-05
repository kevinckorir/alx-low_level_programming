#include <stdint.h>
#include "main.h"

/**
 *get_endianness - checks if a machine is alittle or bif endian
 * Return: 0 for big , 1 for little
 */
int get_endianness(void)
{
	uint16_t i;
	uint8_t *byte_ptr;

	i = 0x0102;
	byte_ptr = (uint8_t *) &i;

	if (*byte_ptr == 0x02)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
