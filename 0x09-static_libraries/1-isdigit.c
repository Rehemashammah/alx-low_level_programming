# include "main.h"
/**
 * _isdigit - Entry point for our function
 * @c: Parameter passed
 * Return: 1 if success 0 if otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

