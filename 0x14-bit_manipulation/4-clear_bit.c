#include "main.h"

/**
 * clear_bit- Function that sets the value of a bit to 0 at given index
 * @n: Argument 1
 * @index: index, starting from 0 of the bit you want to set
 *
 * Return: 1 on success, -1 on failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1UL << index;

	if (mask == 0)
	{
		return (-1);
	}
	*n &= ~mask;

	return (1);
}
