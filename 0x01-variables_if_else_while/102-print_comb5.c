#include <stdio.h>

/**
 * main - print all possible combinations of 2 digit numbers
 * Return: 0 (success)
 */
int main(void)
{
	int i;
	int j;

	for (i = 0; i < 100; i++)
	{
		for (j = 0; j < 100; j++)
		{
		if (i != j)
		{
		/*if (i > j)
		{
		int temp = i;

		i = j;
		j = temp;
		}*/
		putchar(i / 10 + '0');
		putchar(i % 10 + '0');
		putchar(' ');
		putchar(j / 10 + '0');
		putchar(j % 10 + '0');

		if (i != 98 || j != 99)
		{
			putchar(',');
			putchar(' ');
		}
		}
		}
	}
	putchar('\n');
	return (0);
}

