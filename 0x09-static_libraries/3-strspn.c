#include "main.h"

/**
 * _strspn - Function to get the length of a prefix substring
 * @s: pointer
 * @accept: pointer
 * Return: number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
