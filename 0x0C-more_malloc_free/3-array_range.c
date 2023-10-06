#include "main.h"

/**
 * array_range - Create array of integers
 * @min: Minimum number
 * @max: Maximum number
 * Return: Pointer
 */

int *array_range(int min, int max)
{
	int *arr;
	int i;
	int n;

	if (min > max)
	{
		return (NULL);
	}
	n = (max - min) + 1;
	arr = malloc(sizeof(int) * n);
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < n; i++)
	{
		arr[i] = min++;
	}
	return (arr);
}
