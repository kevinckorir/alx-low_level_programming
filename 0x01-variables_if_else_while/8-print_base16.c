#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 * Return: 0 (success)
 */
int main(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
		putchar(c);
	for (c = 97; c <= 102; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
