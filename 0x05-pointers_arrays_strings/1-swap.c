#include "main.h"

/**
 * swap_int - Function to swipe integers
 * @a: Parameter one passed
 * @b: Parameter two passed
 * Return: Always 0
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
