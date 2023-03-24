#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - entry point for the main function
 *no parameters
 *
 *this is a function to check if for a random number generated
 *Return: 0 success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive", n);
	}
	else if ((n == 0))
	{
		printf("%d is zero", n);
	}
	else/* if (n < 0)*/
	{
		printf("%d is negative", n);
	}
	return (0);
}
