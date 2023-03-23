#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: Number of times the dash is printed
 */
void print_line(int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		if (i != 0)
		{
			_putchar(95);
		}
	}
	_putchar('\n');
}

