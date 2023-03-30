#include "main.h"

/**
* reverse_array - reverse the content of an array
* @a: pointer to the array
* @n: number of elements of the array
*/
void reverse_array(int *a, int n)
{
	int i, j = 0;
	int temp;

	for (i = n - 1; i > j; j++, i--)
	{
		temp = a[j];
		a[j] = a[i];
		a[i] = temp;
	}
}
