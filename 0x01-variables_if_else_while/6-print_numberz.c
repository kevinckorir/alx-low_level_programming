#include <stdio.h>

/**
 * main - prints single digits numbers (0-9)
 * Return: 0 (success)
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		putchar('0' + i);
	putchar('\n');
	return (0);
}
