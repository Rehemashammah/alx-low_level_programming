#include "main.h"

/**
 * get_bit- Function that returns value of bit at given index
 * @n: Value given in int
 * @index: Index starting from 0
 *
 * Return: Value of bit at index or -1 if error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int i = 0x01;

	i <<= index;

	if (i == 0)
		return (-1);

	if ((n & i))
		return (1);
	else
		return (0);
}
