#include <stdio.h>

/**
*main - Outputs some values on the std out
*no parameters
*
*print sizes of some data types
*Return:0
*/
int main(void)
{
	int charsize = sizeof(char);
	int intsize = sizeof(int);
	int longSize = sizeof(long);
	int longLongIntSize = sizeof(long long int);
	int floatsize = sizeof(float);

	printf("Size of a char: %d byte(s)\n", charsize);
	printf("Size of an int: %d byte(s)\n", intsize);
	printf("Size of a long int: %d byte(s)\n", longSize);
	printf("Size of a long long int: %d byte(s)\n", longLongIntSize);
	printf("Size of a float: %d byte(s)\n", floatsize);
	return (0);
}
