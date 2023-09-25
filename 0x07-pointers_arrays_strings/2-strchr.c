#include "main.h"
#include <string.h>

/**
 * _strchr - Function that locates a character in string
 * @s: Pointer
 * @c: Targert
 * Return: Pointer to first occurence
 */

char *_strchr(char *s, char c)
{
	return (strchr(s, c));
}
