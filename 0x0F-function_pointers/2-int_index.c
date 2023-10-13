#include "function_pointers.h"

/**
 * int_index - fuction that searches for an integer
 * @array: array
 * @size: Number of elements in the array
 * @cmp: pointer to the function to be used to compare values
 *
 * Return: index of first element
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}
	if (array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
