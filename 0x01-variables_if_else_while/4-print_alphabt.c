#include <stdio.h>

/**
 * main - prints the lowercase alphabet except q and e
 * Return: 0 (success)
 */
int main(void)
{
	char c;

	for (c = 97; c <= 122; c++)
	{
	if ((c != 101) && (c != 113))
	{
		putchar(c);
	}
	}

	putchar(10);
	return (0);
}
