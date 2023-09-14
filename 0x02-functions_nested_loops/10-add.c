#include "main.h"

/**
 * add - entry point for function definition
 * @a: Parameter to be added
 * @b: Parameter to be added
 * Return: results
 */
int add(int a, int b)
{
	int add;

	add = a + b;
	_putchar(add + '0');
	_putchar('\n');
	return (add);
}
