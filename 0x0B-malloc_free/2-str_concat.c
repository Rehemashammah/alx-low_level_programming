#include "main.h"
#include <string.h>

/**
 * str_concat - concatenate two strings
 * @s1: String 1 passed
 * @s2: String 2 passed
 *
 * Return: Pointer
 */

char *str_concat(char *s1, char *s2)
{
	char *newstring, *new_s1, *new_s2;
	int i = 0, len_s1 = 0, len_s2 = 0;

	new_s1 = s1;
	new_s2 = s2;
	if (s1 == NULL)
	{
		s1 = "";
	}
	len_s1 = strlen(s1);
	len_s2 = strlen(s2);

	s1 = new_s1;
	s2 = new_s2;
	newstring = malloc((len_s1 + len_s2 + 1) * sizeof(char));
	new_s1 = newstring;
	if (newstring == NULL)
	{
		return (NULL);
	}
	for (; i < (len_s1 + len_s2); i++)
	{
		if (i < len_s1)
		{
			newstring[i] = *s1;
			s1++;
		}
		else
		{
			newstring[i] = *s2;
			s2++;
		}
	}
	newstring[i] = '\0';
	return (newstring);
}
