#include "main.h"

/**
 * flip_bits- Number of bits you'll need to flip
 * @n: Argument 1
 * @m: Argument 2
 * Return: Number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int XOR = (n ^ m);
	unsigned long int max = 0x01;

	while (max <= XOR)
	{
		if (max & XOR)
			count++;
		max <<= 1;
	}
	return (count);
}
