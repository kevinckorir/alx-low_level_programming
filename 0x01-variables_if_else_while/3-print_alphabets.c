#include <stdio.h>

/**
 * main - prints alphabet in lowercase and uppercase
 * Return: 0 success
 */
int main(void)
{
	char c;

	for (c = 97; c <= 122; c++)
		putchar(c);
	for (c = 65; c <= 90; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
