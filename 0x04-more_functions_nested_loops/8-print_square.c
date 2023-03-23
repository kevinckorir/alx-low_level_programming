#include "main.h"

/**
 * print_square - prints a square
 * @size: integer size of the square
 */
void print_square(int size)
{
	int i;
	int j;

	for (i = 0; i < size; i++)
	{
	for (j = 0; j <= size; j++)
	{
	if (j != 0)
	_putchar(35);
	}
	_putchar('\n');

	}
}
