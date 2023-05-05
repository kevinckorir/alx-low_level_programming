#include "main.h"

/**
 * print_binary - converts number to binary
 * @n : number to be converted
 */
void print_binary(unsigned long int n)
{
	int i;
	int mask;
	int found = 0;

	for (i = 63; i >= 0; i--)
	{
		mask = (1ul << i);
		if (!found && !(n & mask))
		{
			continue;
		}
		found = 1;
		if (n & mask)
			_putchar('1');
		else
			_putchar('0');
	}
	if (!found)
	{
		_putchar('0');
	}
}
