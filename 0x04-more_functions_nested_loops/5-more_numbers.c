#include "main.h"

/**
 * more_numbers - prints the number 0-14 10x
 */
void more_numbers(void)
{
	int i;
	int j;

	for   (i = 0; i < 10; i++)
	{
	for (j = 0; j <= 14; j++)
	{
	if (j > 9)
	{
	_putchar((j / 10) + '0');
	}
	_putchar((j % 10) + '0');
	}
	_putchar('\n');
	}

}
