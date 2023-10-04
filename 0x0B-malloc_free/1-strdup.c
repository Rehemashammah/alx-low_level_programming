#include "main.h"

/**
 * _strdup - returns pointer to a newly allocated space in memory
 * @str: string passed
 *
 * Return: Pointer
 */

char *_strdup(char *str)
{
	int count = 0;
	char *ptstring;
	int size = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[size] != '\0')
	{
		size++;
	}
	ptstring = malloc((size + 1) * sizeof(char));

	if (ptstring == NULL)
	{
		return (NULL);
	}

	for (count = 0; count < size; count++)
	{
		ptstring[count] = str[count];
	}
	ptstring[size] = '\0';
	return (ptstring);
}
