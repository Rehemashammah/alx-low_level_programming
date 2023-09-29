#include "main.h"
/**
 * _islower - Entry point for function definition
 * @c: Parameter passed
 * Return: 0 (Success)
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
