#include "main.h"

/**
 * factorial - function to print the factorial of a number
 * @n: Parameter passed
 * Return: O on success
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n < 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
