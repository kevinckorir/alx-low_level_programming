#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @a: first int pointer parameter
 * @b: second int pointer parameter
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}
