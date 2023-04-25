#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - prints sums of positive numbers
 * @argc: count
 * @argv: array of args
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	for (i = 1; i < argc; i++)
	{
		j = 0;

		while (argv[i][j])
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}

