#include "main.h"

/**
 * times_table - prints the 9 times table
 */

void times_table(void)
{
	int i, j, k, u, d;

	for (i = 0; i <= 9; i++)
	{
	for (j = 0; j <= 9; j++)
	{
	k = i * j;
	if (k > 9)
	{
	u = k % 10;
	d = (k - u) / 10;
	_putchar(44);
	_putchar(32);
	_putchar(32);
	_putchar(d + '0');
	_putchar(u + '0');
	}
	else
	{
	if (j != 0)
	{
	_putchar(44);
	_putchar(32);
	_putchar(32);
	}
	_putchar(k + '0');
	}
	}
	_putchar('\n');
	}
}
