#include <stdio.h>
#include <stdlib.h>
/*#include "main.h"*/

/**
 * main -minimum number of coins to make change for an amount of money
 * @argc: Count of arguments
 * @argv: array of arguments
 * Return: 0 for Success 1 for Error
 */
int main(int argc, char *argv[])
{
	int number, k, result;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	number = atoi(argv[1]);
	result = 0;

	if (number < 0)
	{
		printf("0\n");
		return (0);
	}

	for (k = 0; k < 5 && number >= 0; k++)
	{
		while (number >= coins[k])
		{
			result++;
			number -= coins[k];
		}
	}

	printf("%d\n", result);
	return (0);
}

