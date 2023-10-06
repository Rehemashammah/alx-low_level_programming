#include "main.h"

/**
 * _realloc - Function that reallocates memory block
 * @ptr: pointer to memory previously allocated
 * @old_size: Size in bytes of allocated space for ptr
 * @new_size: New size in bytes for new memory
 *
 * Return: pointer to new memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if ((new_size == 0) && (ptr != NULL))
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	free(ptr);
	ptr = malloc(new_size);
	return (ptr);
}
