#include "main.h"

/**
 * malloc_checked - function to allocate memory using malloc
 * @b: Parameter passed
 *
 * Return: A pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *pt_Array;

	pt_Array = malloc(b);
	if (!pt_Array)
	{
		exit(98);
	}
	return (pt_Array);
}
