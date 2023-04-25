#include <stdio.h>

/**
 * main - count arguments parsed to program
 * @argc: arguments count
 * @argv: array
 *Return: 0 success
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
