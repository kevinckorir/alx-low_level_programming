#include <stdlib.h>
#include <string.h>

/**
 * _realloc - reallocates a memory block
 * @ptr: pointer
 * @old_size: old size of mem block
 * @new_size: new size of mem block
 * Return: Nothing
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
	{
		return (malloc(new_size));
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	new_ptr = malloc(new_size);

	if (!new_ptr)
	{
		return (NULL);
	}
	memcpy(new_ptr, ptr, (new_size < old_size) ? new_size : old_size);
	free(ptr);

	return (new_ptr);
}
