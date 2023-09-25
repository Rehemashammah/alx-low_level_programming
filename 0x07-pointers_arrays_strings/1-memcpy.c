#include "main.h"

/**
 * _memcpy - Function that copies memory area
 * @dest: Destination
 * @src: SOurce
 * @n: number of bytes you want to copy
 * Return: Pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	int r = n;

	for (; r < i; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
