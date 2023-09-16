#include "main.h"

/**
 * print_triangle - Function to print a triangle
 * @size: Parameter passed
 * Return: 0 on success
 */

void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, k, j;
			for (i = 0; i <= size; i++)
		{
			for (k = (size - i); k > 0; k--)
			{
				_putchar(' ');
			}
			for (j = 0; j < i; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
