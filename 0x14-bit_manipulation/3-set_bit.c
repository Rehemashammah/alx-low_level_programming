#include "main.h"

/**
 * set_bit- Set value of a bit to 1 at given index
 * @n: Argument 1
 * @index: index starting from 0
 *
 * Return: 1 on success, -1 on failure
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1UL << index;

	if (mask == 0)
	{
		return (-1);
	}
	*n |= mask;

	return (1);
}
