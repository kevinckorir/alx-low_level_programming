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

	printf("Size of a char: %d byte(s)", charsize);
	printf("Size of an int: %d byte(s)", intsize);
	printf("Size of a long int: %d byte(s)", longSize);
	printf("Size of a long long int: %d byte(s)", longLongIntSize);
	printf("Size of a float: %d byte(s)", floatsize);
	return (0);
}
