#include "main.h"

/**
 * sqrt_function - Function to find the square root of a number
 * @num: Number passed to find its square root
 * @root: Square root of a num
 * Result: Always 0 on success
 */

int sqrt_function(int num, int root)
{
	if ((root * root) > num)
	{
		return (-1);
	}
	else if ((root * root) == num)
	{
		return (root);
	}
	else
	{
		return (sqrt_function(num, root + 1));
	}
}

/**
 * _sqrt_recursion - Function to find the natural square root of a number
 * @n: Parameter passed
 * Return: Always 0 n success
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (sqrt_function(n, 0));
	}
}
