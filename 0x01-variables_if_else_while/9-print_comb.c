#include <stdio.h>

/**
 * main - prints all possible combinations of single digit numbers
 * Return: 0 (success)
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0');
		if (i < 9)
		putchar(44);
		putchar(32);
	}
	putchar(10);
	return (0);
}
