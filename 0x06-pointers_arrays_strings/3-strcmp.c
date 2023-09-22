#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: String 1
 * @s2: String 2
 *
 * Return: return the comparison
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (*(s1 + i) && *(s2 + i) && (*(s1 + i) == *(s2 + i)))
	{
		i++;
	}
	return (*(s1 + i) - *(s2 + i));
}
