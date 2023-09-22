#include "main.h"

/**
 * string_toupper - function to change lowercase letters to uppercases
 * @s: string to convert
 *
 * Return: upper
 */

char *string_toupper(char *s)
{
	int i = 0;

	while (*(s + i))
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] -= 32;
		}
		i++;
	}
	return (s);
}
