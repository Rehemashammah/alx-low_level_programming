#include "main.h"

/**
 * create_array - create an arrray  of char and initialize with specific char
 * @size: size passed
 * @c: character passed
 *
 * Return: pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *ptchar;
	unsigned int count = 0;

	ptchar = malloc(size * sizeof(char));
	if (size == 0)
	{
		return (NULL);
	}
	if (ptchar == NULL)
	{
		return (NULL);
	}
	for (count = 0; count < size; count++)
	{
		ptchar[count] = c;
	}
	return (ptchar);
}
