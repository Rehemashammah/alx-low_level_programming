#include "main.h"

/**
 * _calloc - Function that allocates memory for an array
 * @nmemb: Elements for the array
 * @size: size in bytes
 *
 * Return: Pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *ptr_call;
	int *ptr_mall;
	unsigned int i, j;

	ptr_mall = malloc(sizeof(int) * size);
	ptr_call = calloc(nmemb, size);
	if (nmemb == 0)
	{
		return (NULL);
	}
	if (size == 0)
	{
		return (NULL);
	}
	if (ptr_mall == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < i; j++)
		{
			return (ptr_call);
		}
	}
	return (ptr_mall);
}
