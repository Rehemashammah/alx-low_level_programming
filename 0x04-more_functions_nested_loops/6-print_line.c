#include "main.h"
/**
 * print_line - Function to print a straight line
 * @n: Parameter passed
 * Return: Always 0 on success
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
