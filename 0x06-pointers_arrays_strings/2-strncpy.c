#include "main.h"
/**
 * _strncpy - Function to copy a string
 * @dest: Destination
 * @src: Source
 * @n: Number to copy
 * Return: destination
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
