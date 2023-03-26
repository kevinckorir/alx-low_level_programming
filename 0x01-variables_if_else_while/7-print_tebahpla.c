#include <stdio.h>

/**
 * main - prints lowercase alphabet in reverse
 * Return: 0 (success)
 */
int main(void)
{
	char c;

	for (c = 122; c >= 97; c--)
		putchar(c);
	putchar('\n');
	return (0);
}
