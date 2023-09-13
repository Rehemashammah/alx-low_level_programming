#include "main.h"

/**
 * _isalpha - entry point for function definition
 * @c: parameter definition
 * Return: 1 if character is alphabet and 0 if otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
