#include "main.h"

/**
 * _prime - Function to find if number is prime
 * @i: parameter passed
 * @j: Parameter 2 passed
 * Return: 0 on success
 */

int _prime(int i, int j)
{
	if (j == 1)
	{
		return (1);
	}
	else if (i % j == 0)
	{
		return (0);
	}
	else
	{
		return (_prime(i, j-1));
	}
}

/**
 * is_prime_number - Function to find prime number
 * @n: parameter passed
 * Return: 0 on success
 */

int is_prime_number(int n)
{
	if (n < 3)
	{
		return (0);
	}
	return (_prime(n, n - 1));
}
