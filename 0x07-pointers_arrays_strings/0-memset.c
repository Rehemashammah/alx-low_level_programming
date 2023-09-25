#include "main.h"

/**
 * _memset - Function to fill memory with constant byte
 * @s: Parameter one
 * @b: Parameter two
 * @n: Parameter three
 * 
 * Return: Pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
