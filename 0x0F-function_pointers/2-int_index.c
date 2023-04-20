#include "function_pointers.h"

/**
 * int_index - searches for an integer in an array using a cmp func
 * @array: array to be searched
 * @size: size of the array
 * @cmp: comparison function to be used
 *
 * Return: the index of the first element for which the comparison
 * function returns true, or -1 if no element found or error
 */
int int_index(int *array, int size, int(*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
		return (i);
		}
	}
	return (-1);
}
