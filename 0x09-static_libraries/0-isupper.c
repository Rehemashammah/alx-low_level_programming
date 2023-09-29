#include "main.h"

/**
 * _isupper - Entry point for function definiton
 * @c: Parameter to be used
 * Return: Always 0 on success
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
