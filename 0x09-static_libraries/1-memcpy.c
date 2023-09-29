#include "main.h"
#include <string.h>

/**
 * _memcpy - Function that copies memory area
 * @dest: Destination
 * @src: SOurce
 * @n: number of bytes you want to copy
 * Return: Pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}
