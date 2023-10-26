#include "main.h"

/**
 * print_binary- Function that prints the binary rep of a number
 * @n: Given paramenter and a long int
 *
 * Return: Binary of an int
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	putchar ((n & 1) + '0');
}
