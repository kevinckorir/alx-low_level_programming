#include <stdio.h>

/**
 * main - prints single digit numbers
 * Return: 0 (success)
 */
int main(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
		putchar(i);
	putchar(10);
	return (0);
}
