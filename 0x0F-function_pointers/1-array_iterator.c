#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - applies a function to each element of an array
 * @array: array to be iterated
 * @size: size of the array
 * @action: function pointer to apply to each element
 *
 * Retun: void
 */
void array_iterator(int *array, size_t size, void(*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
