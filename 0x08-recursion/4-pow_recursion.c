#include "main.h"

/**
 * _pow_recursion - function to return value of x raised to power of y
 * @x: Parameter one
 * @y: parameter two
 * Return: Always 0 on success
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
