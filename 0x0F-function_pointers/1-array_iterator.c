#include "function_pointers.h"
/**
 * array_iterator - Function to execute a function
 * @array: pointer to an integer
 * @size: size of the arrray
 * @action: pointer to the function you need to use
 *
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;
	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
